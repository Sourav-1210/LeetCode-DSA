class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        int ans = 0;
        if(x<0){
            return false;
        }
        while(temp){
            int rem = temp%10;
            if(ans>INT_MAX/10){
                return false;
            }
            ans = ans*10+rem;
            temp/=10;
        }
        return ans == x;
    }
};