class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector <int> expectedNums;
        int j = 0;
        if(nums.empty()){
            return 0;
        }
        int count = 1;
        expectedNums.push_back(nums[j]);
        for(int i = 0; i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
               i=i;
            }
            else{
                j = i+1;
                expectedNums.push_back(nums[j]);
                count+=1;
            }
        }
        nums = expectedNums;
        
        return expectedNums.size();
    }
};