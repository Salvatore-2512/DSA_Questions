class Solution {
public:
    bool isPalindrome(int x) {
        int r,d = 1,num = x;
        long long newNum = 0;
        if(x<0)
        {
            return false;
        }
        while(d>=1)
        {
            r = x%10;
            d = x/10;
            newNum = (newNum*10) + r;
            x = d;

        }
        if(num == newNum)
        {
            return true;
        }
        else{
            return false;
        }
    }
};