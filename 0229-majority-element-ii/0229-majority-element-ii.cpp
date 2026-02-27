class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==(nums.size()/3)+1){
                ans.push_back(nums[i]);
            }
            if(ans.size()==2) break;
        }
        return ans;
    }
};