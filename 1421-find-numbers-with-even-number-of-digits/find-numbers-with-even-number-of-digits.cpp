class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i<nums.size();i++){
           
            if(evendigits(nums[i])){
                count+=1;
            }

        }
        return nums.size() - count;
    }
    bool evendigits(int n)
    {
        int count =0;
        while(n!=0){
            count++;
            n/=10;
        }
        return count %2;
    }
};