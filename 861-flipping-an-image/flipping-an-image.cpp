class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image[0].size();
        for(vector<int>& row :image){
            int low = 0;
            int high = n-1;
            while(low<=high){
                int temp =   row[low];
                row[low] = 1-row[high];
                row[high] = 1-temp;
                low++;
                high--;
            }
        }
        return image;
    }
};