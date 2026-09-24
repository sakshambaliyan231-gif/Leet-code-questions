class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = -1;
        int start  = 0;
        int end = nums.size()-1;
        while(start <= end){
            int mid = start +(end-start)/2;
            if(nums[start] == target){
                return start;
            }
            if(nums[mid] == target){
                return mid;
            }
            // left side sorted;
            else if(nums[mid] >= nums[start]){
                if(target <nums[mid] && target >= nums[start] ){
                    end = mid -1;
                }
                else{
                    start = mid +1;
                }
            }
            //right side sorted
            else{
                if(target > nums[mid] && target <= nums[end]){
                    start = mid +1;
                }
                else {
                    end = mid - 1;
                }
            }
        }
        return ans;
    }
};