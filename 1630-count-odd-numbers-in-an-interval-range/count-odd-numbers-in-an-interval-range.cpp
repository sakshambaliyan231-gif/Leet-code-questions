class Solution {
public:
    int countOdds(int low, int high) {
        if(low %2 !=0 && high %2 != 0){
            int count = 1;
            count += (high - low)/2;
            return count;
        }
        if(low %2 ==0 && high %2 != 0){
            int count = 1;
            count += (high - low)/2;
            return count;
        }
        if(low %2 !=0 && high %2 == 0){
            int count = 1;
            count += (high - low)/2;
            return count;
        }
        return (high - low)/2;
        
    }
};