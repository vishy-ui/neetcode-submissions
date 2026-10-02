class Solution {
public:
    long long validk(int k, vector<int>& piles )
    {
        long long sum=0;
        for (auto x : piles)
        {
            sum=sum+ ((x+k-1)/k);
        }
        return sum;
    }


    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int n=piles.size();
        sort(piles.begin(),piles.end());

        int l=1, hi=piles[n-1];
        int min=hi;
        while (l <= hi)
        {
            int k=l+(hi-l)/2;
            long long diff=validk(k,piles);
            if (diff <= h)
            {
                hi=k-1;
                min=k;
            }
            else if (diff > h )
            {
                l=k+1;
            }
        }
        return min;
    }
};