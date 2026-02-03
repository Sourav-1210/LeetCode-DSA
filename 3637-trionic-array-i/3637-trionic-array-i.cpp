class Solution {
public:
    bool isIncreasing(vector<int>& nums,int start,int end){
        for(int i=start;i<end;i++){
            if(nums[i]>=nums[i+1]){
                return false;
            }
        }
        return true;
    }
    bool isDecreasing(vector<int>& nums,int start,int end){
        for(int i=start;i<end;i++){
            if(nums[i]<=nums[i+1]){
                return false;
            }
        }
        return true;
    }
    bool isTrionic(vector<int>& nums) {
        for(int i=1;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                if(isIncreasing(nums,0,i)&&isDecreasing(nums,i,j)&&isIncreasing(nums,j,nums.size()-1)){
                    return true;
                }
            }
        }
        return false;
    }
};