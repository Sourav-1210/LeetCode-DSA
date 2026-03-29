class Solution {
public:
    int gcd(int a,int b){
        if(a == 0) return b;
        if(b == 0) return a;

        while(a>0 && b>0){
            if(a>b){
                a = a%b;
            }else{
                b = b%a;
            }
        }
        return a==0?b:a;
    }
    int gcdOfOddEvenSums(int n) {
        int sumEven = n*(n+1);
        int sumOdd = n*n;
        return gcd(sumEven,sumOdd);
    }
};