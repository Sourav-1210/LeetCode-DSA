class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int score1 = 0;
        int score2 = 0;

        int active = 1;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1){
                active = (active==1?2:1);
            }

            if(i%6 == 5){
                active = (active==1?2:1);
            }

            if(active == 1){
                score1+=nums[i];
            }else{
                score2+=nums[i];
            }
        }
        return score1 - score2;
    }
};