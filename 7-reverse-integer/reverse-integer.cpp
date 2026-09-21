class Solution {
public:
    int reverse(int x) {
        int rem,n;
        long long num=0;
        n=x;
        while(n!=0)
        {
            rem=n%10;
           
            num=num*10+rem;
             if (num > INT_MAX || num < INT_MIN) {
                return 0;}
            n=n/10;
            
        }
        return num;
    }
};