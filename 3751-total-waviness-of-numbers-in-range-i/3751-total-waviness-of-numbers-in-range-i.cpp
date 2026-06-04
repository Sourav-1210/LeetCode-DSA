class Solution {
public:
    int digit(int n){
        vector<int>ans;
        int count = 0;
        while(n>0){
            int digit = n%10;
            ans.push_back(digit);
            n/=10;
        }
        reverse(ans.begin(),ans.end());
        if(ans.size()<3){
            return 0;
        }
        for(int i=1;i<ans.size()-1;i++){
            if(ans[i]>ans[i-1]&&ans[i]>ans[i+1]){
                count++;
            }else if(ans[i]<ans[i-1] && ans[i]<ans[i+1]){
                count++;
            }
        }
        return count;
    }
    int totalWaviness(int num1, int num2) {
        int count = 0;
        for(int i=num1;i<=num2;i++){
            count +=digit(i);
        }
        return count;
    }
};