class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int n=word1.size();
        int m=word2.size();
        string ans="";
        int i=0,r=0,l=0;
        while (r<m && l<n)
        {
            ans=ans+word1[l];
            l++;
            ans=ans+word2[r];
            r++;
        }
        while (r<m)
        {

            ans=ans+word2[r];
            r++;
        }
        while (l<n)
        {   
            ans=ans+word1[l];
            l++;
        }
        return ans;    
    }
};