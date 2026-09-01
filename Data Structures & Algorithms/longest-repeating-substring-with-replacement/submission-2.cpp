class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int n= s.size();
        int l=0, r=0;
        int ans=0,max=0,c=0 ,nk=0;
        unordered_map<char,int>mp;
        
        while (r < n)
        {
            mp[s[r]]++;
            c++;
            if (mp[s[r]]>max) {max=mp[s[r]];}

            nk= r-l+1-max;
            while (nk > k && l!=r)
            {
                mp[s[l]]--;
                l++;
                nk= r-l+1-max;
                c--;
            }
            r++;
            if(c>ans){ans=c;}
        }
        return ans;
        
    }
};
