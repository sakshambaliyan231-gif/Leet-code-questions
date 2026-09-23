class Solution {
public:
    int maxArea(vector<int>& height) {
        int h;
        int ans = 0;
        int i = 0;
        int j = height.size() -1;
        while(i<j){
            h = min(height[i], height[j]);
            int width = j - i;
            int area =width * h;
            ans = max(ans , area);
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};