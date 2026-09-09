class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        int n=temperatures.size();
        vector<int> ans(n);
        stack<int> mono;

        for (int i=0 ; i<n ;i++)
        {
            if (i==0)
            {
                mono.push(i);
                continue;
            }

            while ( !mono.empty() && temperatures[mono.top()] < temperatures[i] )
            {
                int x = mono.top();
                mono.pop();
                ans[x]= i-x;
            }

            mono.push(i);
        }
        return ans;
    }
};