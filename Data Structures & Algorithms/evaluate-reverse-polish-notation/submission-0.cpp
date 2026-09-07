class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        int ans;
        stack <int> stk;
        for(auto x : tokens)
        {
            if (x=="+")
            {
                int n1=stk.top();
                stk.pop();
                int n2=stk.top();
                stk.pop();
                
                n2=n2+n1;

                stk.push(n2);
            }
            else if (x=="-")
            {
                int n1=stk.top();
                stk.pop();
                int n2=stk.top();
                stk.pop();
                
                n2=n2-n1;
                
                stk.push(n2);
            }
            else if (x=="/")
            {
                int n1=stk.top();
                stk.pop();
                int n2=stk.top();
                stk.pop();
                
                n2=n2/n1;
                
                stk.push(n2);
            }
            else if (x=="*")
            {
                int n1=stk.top();
                stk.pop();
                int n2=stk.top();
                stk.pop();
                
                n2=n2*n1;
                
                stk.push(n2);
            }
            else
            {
                int num= stoi(x);
                stk.push(num);
            }
        }
        return stk.top();
    }
};