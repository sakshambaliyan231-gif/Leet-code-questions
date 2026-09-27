class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersect;

        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());

        auto i = s1.begin();
        auto j = s2.begin();

        while(i != s1.end() && j != s2.end()) {
            
            if(*i == *j) {
                intersect.push_back(*i);
                i++;
                j++;
            }
            else if(*i > *j) {
                j++;
            }
            else {
                i++;
            }
        }

        return intersect;
    }
};