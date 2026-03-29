class Solution {
public:
    int reverse(int n){
        int temp = n;
        int rev = 0;
        while(temp>0){
            int digit = temp%10;
            rev = rev*10+digit;
            temp/=10;
        }
        return rev;
    }
    int mirrorDistance(int n) {
        return abs(n - reverse(n));
    }
};