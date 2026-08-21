class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length() != t.length())
        {return false;}
        
        map<char,int> unqS;
        for (auto x : s)
        {unqS[x]++;}
        map<char,int> unqT;
        for (auto x : t)
        {unqT[x]++;}

        
        auto p=unqS.begin();
        auto q=unqT.begin();
        
        while (p!=unqS.end() && q!=unqT.end())
        {
            if(p->first == q->first && p->second == q->second)
            {
                p++;
                q++;
            }
            else{return false;}
        }

    return true;
        
    }
};
