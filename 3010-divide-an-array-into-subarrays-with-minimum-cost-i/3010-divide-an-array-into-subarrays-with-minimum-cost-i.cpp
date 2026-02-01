class Solution {
public:
    int minimumCost(vector<int>& nums) {
        for(int i=0;i<nums.size()-2;i++){
            bool swapped = false;
            for(int j=1;j<nums.size()-i-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                    swapped = true;
                }
            }
            if(swapped == false){
                break;
            }
        }
        return nums[0]+nums[1]+nums[2];
    }
};