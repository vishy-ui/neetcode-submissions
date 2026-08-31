class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int n= s.size();
        int ans=0, l=0,r=0,c=0;
        unordered_map<char , int> mp;
        while (r<=n-1)
        {
            mp[ s[r]  ] ++;
            if( mp[ s[r]  ] > 1 )
            {
                mp.erase(s[l]);
                l++;
                c--;
            }
            else
            {
                c++;
                r++;
                if (c > ans)
                {ans=c;}
            } 
        }
        return ans;
    }
};