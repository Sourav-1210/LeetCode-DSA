class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int>ans;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return ans;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int element = nums[i];
            int rem = target - element;
            if(mp.find(rem)!=mp.end()){
                return {mp[rem],i};
            }
            mp[element]=i;
        }
        return {-1,-1};
    }
};