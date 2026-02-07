class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //    int count = 0;
    //    int candidate = 0;
    //    for(int i=0;i<nums.size();i++){
    //         if(count==0){
    //             candidate = nums[i];
    //         }
    //         count+= (nums[i]==candidate)?1:-1;
    //     }
    //     count = 0;
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[i]==candidate){
    //             count++;
    //         }
    //     }
    //     if(count>nums.size()/2){
    //         return candidate;
    //     }else{
    //         return -1;
    //     }
        unordered_map<int,int>mp;
        for(int x : nums){
            mp[x]++;
        }
        for(auto it:mp){
            if(it.second>nums.size()/2){
                return it.first;
            }
        }
        return -1;
    }
};