class Solution {
public:
    bool backspaceCompare(string S, string T) {
    stack<char> s1;
    stack<char> s2;
    for (auto it=S.begin();it<=S.end();it++)
    {
        if (*it=='#')
        {
            s1.pop();
        }
        else
        {
            s1.push(*it);
            cout << s1.top();
        }
    }
        cout << " ";
        for (auto it=T.begin();it<=T.end();it++)
    {
        if (*it=='#')
        {
            s2.pop();
        }
        else
        {
            s2.push(*it);
            cout << s2.top();

        }
    }
        if (s1==s2)
        {
        return true;
        }
        else
        {
            return false;
        }
        
    }

};
