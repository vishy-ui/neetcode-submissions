class Solution {
public:
    string minWindow(string s, string t) 
    {
        string ans="";
        int ns=s.size();
        int nt=t.size();

        int c=0,mlen=100000,si=0,z=0,f=0;
        int l=0,r=0;

        unordered_map<char,int> mp;
        for (auto x : t)
        {
            mp[x]++;
        }
        while (r < ns)
        {   
            if (c != nt )
            {
                if(mp[s[r]] > 0 )
                {
                    c++;
                    
                }
                mp[s[r]]--;
                r++;
            }
            while(c==nt)
            {
                f=1;
                mp[s[l]]++;
                z=r-l;
                if(mp[s[l]]==1)
                {
                    if (mlen > z)
                    {
                        si=l;
                        mlen=min(mlen,z);
                    }
                    c--;  
                }
                l++;
                
            }     
        }
        if (f==0)
        {
            return "";
        }
        ans=s.substr(si,mlen);
        return ans;
    }
};