class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> arr{};
       
    vector<int> newRow{} ;
    newRow.push_back({1});
    arr.push_back(newRow);
    for(int i =1;i<numRows;i++){
        vector<int> currentRow{};
        currentRow.push_back(1);
        for(int j =1;j<i;j++){
            currentRow.push_back(arr[i-1][j-1]+arr[i-1][j]);
        
        }
        currentRow.push_back({1});
        arr.push_back(currentRow);
    } 
    return arr;
    }    
};