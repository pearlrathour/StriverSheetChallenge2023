class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size(), c=matrix[0].size();
        for(int i=0; i<r; i++){
            if(matrix[i][0] <= target && matrix[i][c-1] >= target){
                int low=0, high=c-1, mid;
                while(low<=high){
                    mid=(high-low)/2 + low;

                    if(matrix[i][mid]==target)
                        return 1;
                    else if(matrix[i][mid] > target)
                        high=mid-1;
                    else
                        low=mid+1;
                }
            }
        }
        return 0;
    }
};