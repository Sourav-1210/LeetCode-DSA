class Solution {
public:
    int mySqrt(int x) {
        int ans = 0;
        if(x==1){
            return 1;
        }
        for(long long i=0;i<=x;i++){
            if(i*i<=x){
                ans = i;
            }else{
                break;
            }
        }
        return ans;
    }
};