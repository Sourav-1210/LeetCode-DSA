class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = prices[0];
        for(int i=0;i<prices.size();i++){
            int ans = prices[i] - minPrice;
            maxProfit = max(maxProfit,ans);
            minPrice = min(minPrice,prices[i]);
        }
        return maxProfit;
    }
};