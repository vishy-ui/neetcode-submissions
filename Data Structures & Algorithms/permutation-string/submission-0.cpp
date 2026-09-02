class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        int n1=s1.size();
        int n2=s2.size();
        int l=0,r=0;
        if (n1>n2) { return false;}
        map<char,int> mps1;
        for (auto x : s1)
        {
            mps1[x]++;
        }
        map<char,int> mps2;
        while(r < n1-1 )
        {
            mps2[s2[r]]++;
            r++;
        }
        while( r < n2)
        {
            mps2[s2[r]]++;
            if (mps1!=mps2)
            {
                mps2[s2[l]]--;
                if (mps2[s2[l]] == 0)
                { mps2.erase(s2[l]); }
                l++;
            }
            else if (mps1==mps2)
            {
                return true;
            }
            r++;
        }
        return false;
    }
};