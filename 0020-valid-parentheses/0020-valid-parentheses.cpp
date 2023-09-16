class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        if(s.length()%2!=0 || s[0] == '}' || s[0] == ')' || s[0] == ']' )
        {
          return false;
        }
        int o1=0,o2=0,o3=0,c1=0,c2=0,c3=0;
        for(int i = 0; i < s.length(); i++) {
          if(s[i] == '(')
          {
            o1++;
          }
          if(s[i] == '[')
          {
            o2++;
          }
          if(s[i] == '{')
          {
            o3++;
          }
          if(s[i] == ')')
          {
            c1++;
          }
          if(s[i] == ']')
          {
            c2++;
          }
          if(s[i] == '}')
          {
            c3++;
          }
          
        }
        if(o1 != c1 || o2 != c2 || o3 != c3)
        {
          return false;
        }

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
      stack.push(s[i]);
    } 
    if (s[i] == '}' && stack.top() == '{' && !stack.empty()) {
      stack.pop();
    } 
    if (s[i] == ']' && stack.top() == '[' && !stack.empty()) {
      stack.pop();
    }
    if (s[i] == ')' && stack.top() == '(' && !stack.empty()) {
      stack.pop();
    }
    if(stack.empty() && (s[i+1] == '}' || s[i+1] == ')' || s[i+1] == ']'))
    {
      return false;
    }
  }
  if (stack.empty()) {
    return true;
  } else {
    return false;
  }

    }   
};