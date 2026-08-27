class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n= prices.size();
        int ans=0;
        int max=0;
        int b=0,s=1;
        while (s<n)
        {
            if (prices[b] > prices[s] )
            {
                b=s;
            }
            else if (prices[s] > prices[b] )
            {
                max= prices[s] - prices[b];
                if (max > ans)
                {ans = max;}
            }
            s++;
        }
        return ans;      
    }
};