class Solution {
public:
    bool isThree(int n) {
        if(n <= 2) {
            return false;
        }

        int m = sqrt(n);

        if(m * m != n) {
            return false;
        }

        for(int i = 2; i < m; i++) {
            if(m % i == 0) {
                return false;
            }
        }

        return true;
    }
};