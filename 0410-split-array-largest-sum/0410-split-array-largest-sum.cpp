class Solution {
public:
    int SubArrays(vector<int>& nums, int sum,int k){
        int split = 1;
        int sumSplit = 0;
        for(int i=0;i<nums.size();i++){
            if(sumSplit+nums[i]<=sum){
                sumSplit+=nums[i];
            }else{
                split++;
                sumSplit = nums[i];
            }
        }
        return split;
    }
    int splitArray(vector<int>& nums, int k) {
        if(k>nums.size()) return -1;
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(SubArrays(nums,mid,k)<=k){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};