class Solution {
public:
    int lengthOfLastWord(string s) {
        int last = (int)s.length()-1;
        while( last>=0 && s[last] ==' ' ){
            last--;
        }
        

        int count = 0;
        while(last>=0 &&  s[last] != ' ' ){
            count+=1;
            last--;
        }
        return count;
    }
};