class Solution {
public:
    // int maxSubArrayHelper(vector<int>& nums,int start,int end){
    //     if(start==end){
    //         return nums[start];
    //     }
    //     int maxLeftBorderSum = INT_MIN;
    //     int maxRightBorderSum = INT_MIN;
    //     int mid = start+(end-start)/2;

    //     int maxLeftSum = maxSubArrayHelper(nums,start,mid);
    //     int maxRightSum = maxSubArrayHelper(nums,mid+1,end);

    //     //Max Cross Border Sum
    //     int leftBorderSum = 0;
    //     int rightBorderSum = 0;
    //     for(int i=mid;i>=start;i--){
    //         leftBorderSum += nums[i];
    //         if(leftBorderSum > maxLeftBorderSum){
    //             maxLeftBorderSum = leftBorderSum;
    //         }
    //     }
    //     for(int i=mid+1;i<=end;i++){
    //         rightBorderSum += nums[i];
    //         if(rightBorderSum > maxRightBorderSum){
    //             maxRightBorderSum = rightBorderSum;
    //         }
    //     }
    //     int crossBorderSum = maxLeftBorderSum + maxRightBorderSum;
    //     return max(maxLeftSum,max(maxRightSum,crossBorderSum));
    // }
    int maxSubArray(vector<int>& nums) {
        // return maxSubArrayHelper(nums,0,nums.size()-1);
        int sum = 0;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxi = max(sum,maxi);

            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};