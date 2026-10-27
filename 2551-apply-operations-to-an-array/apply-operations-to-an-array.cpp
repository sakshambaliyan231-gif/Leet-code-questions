class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
        int left = 0;
       int right = 0;
       while (right < n) {
        if (nums[right] != 0) {
        swap(nums[left], nums[right]);
        left++;
    }
    right++;
}
        return nums;
    }
};