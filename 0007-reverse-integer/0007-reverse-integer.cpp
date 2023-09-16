class Solution {
public:
    int reverse(int x) {
        int r,d = 1;
        long long int n = x;
        long long int newNum = 0;
        if(x<0)
        {
            n = n*(-1);
        }
        while(d>=1)
        {
            r = n%10;
            d = n/10;
            newNum = (newNum*10) + r;
            n = d;

        }
        long long int lb = (long long int) -1*pow(2,31);
        long long int ub =  pow(2,31)-1;
        if(newNum > (ub) || newNum< (lb) )
        {
            return 0;
        }
        
        if(x<0)
        {
            newNum = newNum*(-1);
        }
        
        return newNum;
    }
};