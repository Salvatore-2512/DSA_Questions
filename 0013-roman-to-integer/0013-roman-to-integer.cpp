class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        for(int i = 0; i<s.length();i++)
        {
            if(s[i] == 'M' )
            {
                num = num+1000;
            }
            if(s[i] == 'D' )
            {
                num = num+500;
            }
            if(s[i] == 'C' )
            {
                if(s[i+1] == 'D')
                {
                    num+=400;
                    i++;
                }else if(s[i+1] == 'M')
                {
                    num+=900;
                    i++;
                }else{

                
                num = num+100;
                }
            }
            if(s[i] == 'L' )
            {
                num = num+50;
            }
            if(s[i] == 'X' )
            {
                if(s[i+1] == 'L')
                {
                    num+=40;
                    i++;
                }else if(s[i+1] == 'C')
                {
                    num+=90;
                    i++;
                }else{

                
                num = num+10;
                }
            }
            if(s[i] == 'V' )
            {
                num = num+5;
            }
            if(s[i] == 'I' )
            {
                if(s[i+1] == 'V')
                {
                    num+=4;
                    i++;
                }else if(s[i+1] == 'X')
                {
                    num+=9;
                    i++;
                }else{

                
                num = num+1;
                }
            }
        }
        return num;
        
    }
};