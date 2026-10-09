class Solution {
    public int maxProfit(int[] prices) {
        int minPrice = prices[0];
        int maxProfit = Integer.MIN_VALUE;
        for(int x : prices){
            int diff = x - minPrice;
            maxProfit = Math.max(maxProfit,diff);
            minPrice = Math.min(minPrice,x);
        }
        return maxProfit;
    }
}