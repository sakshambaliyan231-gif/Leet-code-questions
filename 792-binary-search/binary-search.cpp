class Solution {
public:
    int search(vector<int>& nums, int target) {
        int found = -1;
        int start = 0;
        int end = nums.size()-1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(target == nums[mid]){
                found = mid;
                break;
            }
            else if(target < nums[mid]){
                end = mid -1;
            }
            else{
                start = mid +1;
            }
        }
        return found;
    }
};