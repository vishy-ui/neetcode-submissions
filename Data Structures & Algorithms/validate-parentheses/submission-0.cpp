class Solution {
public:
    bool isValid(string s) 
    {
        stack <char> open;
        for (auto x : s )
        {
            if(x=='{' || x=='(' || x=='[' )
            {
                open.push(x);
            }
            else
            {
                if ( open.empty())
                {
                    return false;
                }
                char tp=open.top();
                if (tp== '{' && x=='}' )
                {
                    open.pop();
                }
                else if (tp== '(' && x==')' )
                {
                    open.pop();
                }
                else if (tp== '[' && x==']' )
                {
                    open.pop();
                }
                else
                {
                    cout <<"tp="<<tp << "  x=" << x <<endl;
                    return false;
                }
            }
        }
        
        if ( open.empty())
        {
            return true;
        }
        else
        {
            cout << '1';
            return false;
        }
    }
};