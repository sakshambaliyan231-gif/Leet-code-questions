class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& nums) {
        int minDistance = INT_MAX;
        int ans = -1;
        int distance ;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i][0] == x || nums[i][1] == y){
                
                distance = abs(nums[i][0] - x) + abs(nums[i][1] - y) ;
                if(distance < minDistance){
                    minDistance = distance ;
                    ans = i;
                }
            }
        }
        return ans;
        
    }
};