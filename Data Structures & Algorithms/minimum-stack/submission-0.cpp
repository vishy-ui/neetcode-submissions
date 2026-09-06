class MinStack {
public:
    stack <int> stk;
    stack <int> minstk;
    MinStack() 
    {
    }
    void push(int value) 
    {
        if (!stk.empty())
        {
            if (value < minstk.top())
            {
                minstk.push(value);
            }
            else
            {
                minstk.push(minstk.top());
            }
            stk.push(value);
        }
        else
        {
        
            minstk.push(value);
            stk.push(value);
        }
    }
    void pop() 
    {
        if (!stk.empty()) 
        {
            minstk.pop();
            stk.pop();
        }
    }
    int top() 
    {   
        if (!stk.empty())
        {
            return stk.top();
        }
        else
        {
            return 0;
        }
    }
    int getMin() 
    {
        if (!minstk.empty())
        {    
            return minstk.top();   
        }
        else
        {
            return 0;
        }
    }    
};