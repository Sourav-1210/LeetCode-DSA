class Solution {
public:
    int rowNeg(vector<int>&row){
        int low = 0;
        int high = row.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(row[mid]<0){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return row.size()-low;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for(int i=0;i<grid.size();i++){
            count+=rowNeg(grid[i]);
        }
        return count;
    }
};