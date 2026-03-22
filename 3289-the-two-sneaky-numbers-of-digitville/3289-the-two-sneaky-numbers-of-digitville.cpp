class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        unordered_set<int>seen;
        for(int x:nums){
            if(seen.count(x)){
                ans.push_back(x);
            }else{
                seen.insert(x);
            }
        }
        return ans;
    }
};