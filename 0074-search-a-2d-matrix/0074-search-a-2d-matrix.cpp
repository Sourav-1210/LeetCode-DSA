class Solution {
public:
    bool binarySearch(vector<int>&arr,int n,int target){
        int low = 0;
        int high = n-1;
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]==target){
                return true;
            }else if(arr[mid]<target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        // for(int i=0;i<n;i++){
        //     if(matrix[i][0]<=target && matrix[i][m-1]>=target){
        //         bool ans = binarySearch(matrix[i],m,target);
        //         if(ans){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        int low = 0;
        int high = (n*m)-1;
        while(low<=high){
            int mid = (low+high)/2;
            int row = mid/m;
            int col = mid%m;
            if(matrix[row][col]==target) return true;
            if(matrix[row][col]<target) low = mid+1;
            else high = mid-1;
        }
        return false;
    }
};