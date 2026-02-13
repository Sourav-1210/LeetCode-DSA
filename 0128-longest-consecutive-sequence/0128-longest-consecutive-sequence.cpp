class Solution {
public:
    bool linearSearch(vector<int>& nums,int target){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return true;
            }
        }
        return false;
    }
    int longestConsecutive(vector<int>& nums) {
        // int n = nums.size();
        // int longest = 0;
        // for(int i=0;i<nums.size();i++){
        //     int x = nums[i];
        //     int count = 1;
        //     while(linearSearch(nums,x+1)==true){
        //         x = x+1;
        //         count = count+1;
        //     }
        //     longest = max(longest,count);
        // }
        // return longest;
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int last_smaller = INT_MIN;
        int count = 0;
        int longest = 1;
        for(int i=0;i<n;i++){
            if(nums[i]-1==last_smaller){
                count=count+1;
                last_smaller = nums[i];
            }else if(nums[i]!=last_smaller){
                count = 1;
                last_smaller = nums[i];
            }
            longest = max(longest,count);
        }
        return longest;
    }
};