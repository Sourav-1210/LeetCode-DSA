class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = INT_MIN;
        for(int i=0;i<prices.size();i++){
            int diff = prices[i]-minPrice;
            maxProfit = max(maxProfit,diff);
            minPrice = min(minPrice,prices[i]);
        }
        return maxProfit;
    }
};