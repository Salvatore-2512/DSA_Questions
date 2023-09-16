class Solution {
public:
    string removeDuplicates(string s) 
    {
        string newStr="";
        for(int i=0; i<s.length(); i++)
        {
            if(newStr.length() > 0){
                if(newStr[newStr.length() - 1] == s[i] )
                {
                    newStr.pop_back();
                }else
                {
                    newStr.push_back(s[i]);
                }
            }else{
                newStr.push_back(s[i]);
            }
        }

        return newStr;
    }

        
        
};