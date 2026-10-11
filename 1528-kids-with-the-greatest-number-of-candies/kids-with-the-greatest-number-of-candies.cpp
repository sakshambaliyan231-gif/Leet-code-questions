class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = 0;
        vector<bool> winner;
        for(int i = 0 ;i<candies.size();i++){
                maxi = max(maxi,candies[i]);
        }
        for(int i = 0; i<candies.size();i++){
            if(candies[i]+extraCandies >= maxi){
                winner.push_back(true);
            }
            else{
                winner.push_back(false);
            }
        }
        return winner;
    }
};