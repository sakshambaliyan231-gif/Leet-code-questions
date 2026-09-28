class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set <int> s(nums.begin(),nums.end());
        vector <int> notpresent ;
        for(int i = 1; i<= nums.size();i++){
            if(!s.contains(i))
            notpresent.push_back(i);
        }
        return notpresent;
    }
};