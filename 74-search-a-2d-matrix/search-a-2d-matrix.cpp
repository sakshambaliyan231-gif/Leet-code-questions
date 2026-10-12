class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool found = false;
        int rowStart = 0;
        int rowEnd = matrix.size()-1;
         if (matrix.empty() || matrix[0].empty()) {
            return false;
        }
        while(rowStart <= rowEnd){
            int rowMid = rowStart +(rowEnd - rowStart)/2;
            if(target< matrix[rowMid][0]){
                rowEnd = rowMid-1;

            }
            else{
                rowStart = rowMid +1;

            }

        }
        int row = rowEnd;
        if (row < 0) {
    return false;
}
        int start = 0;
int end = matrix[row].size() - 1;
        while(start <= end){
            int mid = start +(end - start)/2;
            if(matrix[row][mid] == target){
                found = true;
                break;
            }
            else if(target < matrix[row][mid]){
                end = mid -1;
            }
            else{
                start = mid +1;
            }
        }
        return found;
    }
};