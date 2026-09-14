class Solution {
    public int findGCD(int[] nums) {
        int maxi = nums[0];
        int mini = nums[0];

        for(int i=0;i<nums.length;i++){
            maxi = Math.max(maxi,nums[i]);
            mini = Math.min(mini,nums[i]);
        }

        if(maxi == 0) return mini;
        if(mini == 0) return maxi;

        while(maxi>0 && mini>0){
            if(maxi>mini){
                maxi = maxi-mini;
            }else{
                mini = mini - maxi;
            }
        }
        return maxi == 0?mini:maxi;
    }
}