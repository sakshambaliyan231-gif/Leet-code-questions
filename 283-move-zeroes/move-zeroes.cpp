class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(int val :nums){
            if(val != 0){
                nums[count] = val;
                count ++;
            }
        }
        while( count < nums.size()){
            nums[count++] = 0;
        }
    
    }
};