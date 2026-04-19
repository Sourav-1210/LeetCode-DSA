class Solution {
public:
    static bool cmp(pair<string,int>a,pair<string,int>b){
        return a.second>b.second;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>ans;
        vector<pair<string,int>>vec;
        for(int i=0;i<names.size();i++){
            vec.push_back({names[i],heights[i]});
        }
        sort(vec.begin(),vec.end(),cmp);
        for(auto it:vec){
            ans.push_back(it.first);
        }
        return ans;
    }
};