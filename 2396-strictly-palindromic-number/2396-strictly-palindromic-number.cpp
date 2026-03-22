class Solution {
public:
    string DecimalToBinary(int n,int base){
        if(n==0) return "0";
        string result = "";

        while(n>0){
            result+=(n%base)+'0';
            n/=base;
        }
        reverse(result.begin(),result.end());
        return result;
    }
    bool isPalindrome(string val){
        int x = val.size();
        int low = 0;
        int high = x-1;
        while(low<high){
            if(val[low]!=val[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
    bool isStrictlyPalindromic(int n) {
        for(int b=2;b<=n-2;b++){
            if(!isPalindrome(DecimalToBinary(n,b))){
                return false;
            }
        }
        return true;
    }
};