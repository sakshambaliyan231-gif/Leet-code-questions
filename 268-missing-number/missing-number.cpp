class Solution {
public:
    int missingNumber(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       int n = nums.size();
        // for(int i = 0; i<nums.size();i++){
        //     if(nums[i] != i){
        //         n = i;
        //         break;
        //     }
        // }
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int num =   (n*(n+1)/2) - sum;

        return num;
    }
};