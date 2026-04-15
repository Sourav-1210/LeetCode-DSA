class Solution {
public:
    int maxValue(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = 0;
        long long mod = 1e9+7;
        vector<long long>dp(n+1);
        vector<pair<int,int>>v(n);

        for(int i=0;i<n;i++) v[i]={a[i],b[i]}, m+=a[i]+b[i];
        sort(v.begin(),v.end(), [](auto &a,auto &b){
            int x = (a.second>0),y=(b.second>0);
            if(x!=y) return x<y;

            if(a.first!=b.first) return a.first>b.first;

            return a.second<b.second;
        });

        long long res = 0;
        vector<long long>p(m+1,1);
        for(int i=1;i<=m;i++) p[i]=p[i-1]*2%mod;
        dp[0] = 0;

        for(int i=0;i<n;i++){
            int o = v[i].first, z=v[i].second;
            dp[i+1]=(dp[i]*p[o+z]%mod+(p[o]-1+mod)*p[z]%mod)%mod;
        }
        return dp[n];
    }
};