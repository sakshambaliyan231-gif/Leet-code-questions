class Solution {
public:
     vector<int> Addition (int i, vector<int> &digits){
        if( i == 0 &&digits[i] == 9){
            digits.insert(digits.begin(),1);
            digits[1] = 0;
          
            
        }
        else if(digits[i]<9){
            digits[i] +=1;
        }
        else{
            digits[i] = 0;
            return Addition(i-1,digits);
        }
        return digits;

    }
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() -1;
        if(digits[n] <9){
            digits[n]+=1;
        }
       else
        Addition(n , digits);
        return digits;
    }
   
};