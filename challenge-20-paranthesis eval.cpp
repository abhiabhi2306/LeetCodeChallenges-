class Solution {
public:
    bool isValid(string s) {
    stack<char> exp;
    for ( auto word = s.begin(); word != s.end(); word++ ) {
        if ( *word == '[' || *word == '(' || *word == '{') {
               exp.push(*word);
               continue;
        }
        if (*word==']')
        {
            if (exp.empty())
                return false;
            if (exp.top()!='[')
            {
                return false;
            }
            else {
                exp.pop();
            }
                
        }
            if (*word==')')
        {
            if (exp.empty())
                return false;
            if (exp.top()!='(')
            {
                return false;
            }
            else {
                exp.pop();
            }
                
        }
        
        
            if (*word=='}')
        {
            if (exp.empty())
                return false;
            if (exp.top()!='{')
            {
                return false;
            }
            else {
                exp.pop();
            }
                
        }
    }
            
        
        if (!exp.empty()) 
        {
            return false;
        }
        
        
        return true;
        
    }       
};
