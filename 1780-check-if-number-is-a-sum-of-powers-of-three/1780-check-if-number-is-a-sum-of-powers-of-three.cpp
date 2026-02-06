class Solution {
public:
    bool checkPowersOfThree(int n) {
        for(int i=14;i>=0;i--){
            int ele = pow(3,i);
            if(n>ele){
                n-=ele;
            }else if(n==ele){
                return true;
            }
        }
        return false;
    }
};