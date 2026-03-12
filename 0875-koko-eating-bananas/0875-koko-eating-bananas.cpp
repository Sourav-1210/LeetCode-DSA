class Solution {
public:
    int maximum(vector<int>& piles){
        int n = piles.size();
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            maxi = max(maxi,piles[i]);
        }
        return maxi;
    }
    long long fun(vector<int>& piles,int hourly){
        long long total_hrs = 0;
        for(int i=0;i<piles.size();i++){
            total_hrs+=ceil((double)piles[i]/(double)hourly);
        }
        return total_hrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maximum(piles);
        int ans = INT_MAX;
        while(low<=high){
            int mid = (low+high)/2;
            long long val = fun(piles,mid);
            if(val<=h){
                ans = mid;
                high = mid-1; 
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};