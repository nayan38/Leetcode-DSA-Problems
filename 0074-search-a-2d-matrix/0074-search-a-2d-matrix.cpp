class Solution {
public:
    bool searchInRow(vector<vector<int>>&mat, int target, int row){
        int st =0, end =mat[0].size() - 1;
        while(st <= end){
            int mid = st + (end-st)/2 ;
            if(target == mat[row][mid]){
                return true;
            }else if(target > mat[row][mid]){
                st = mid+1;
            }else{
                end = mid-1 ;
            }
        }
        return false;

    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size() , n = matrix[0].size() ;
        int strw =0 , endrw = m-1 ;

        while(strw<=endrw){

            int mdrw = strw + (endrw - strw)/2 ;

            if(matrix[mdrw][0] <= target && target <=matrix[mdrw][n-1]){

                return searchInRow(matrix,target,mdrw);

            }else if(target >= matrix[mdrw][n-1]){

                strw = mdrw +1 ;

            }else{
                endrw = mdrw -1 ;
            }
        }
        return false ;
    }
};