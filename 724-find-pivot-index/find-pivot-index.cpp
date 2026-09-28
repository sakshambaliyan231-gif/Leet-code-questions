class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int found = -1;
        
        for(int i = 0; i<nums.size();i++){
            int sum1 = 0;
            int sum2 = 0;
            if(i<=0){
                sum1 =0;
                sum2 = accumulate(nums.begin() + i + 1, nums.end(), 0);
            }
            else{
                sum1 = accumulate(nums.begin(), nums.begin() + i, 0);
                sum2 = accumulate(nums.begin() + i + 1, nums.end(), 0);
            }
            if(sum1 == sum2){
                found = i;
                break;
            }
        }
        return found;
    }
};