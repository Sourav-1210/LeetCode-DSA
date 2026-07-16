class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long>prefix(n);
        long long maxi = 0;
        for(int i=0;i<n;i++){
            maxi = max(maxi,(long long)nums[i]);
            prefix[i] = gcd((long long)nums[i],maxi);
        }
        sort(prefix.begin(),prefix.end());
        int l = 0,r = n-1;
        long long ans = 0;
        while(l<r){
            ans+=gcd(prefix[l],prefix[r]);
            l++;
            r--;
        }
        return ans;
    }
};