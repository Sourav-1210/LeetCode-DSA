class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // vector<int>ans;
        int count = 0;
        int maxi = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                maxi = max(maxi,count);
            }else{
                count = 0;
            }
        }
        // int maxi = *max_element(ans.begin(),ans.end());
        return maxi;
    }
};