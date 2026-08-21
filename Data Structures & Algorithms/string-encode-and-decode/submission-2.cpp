class Solution {
public:

    string encode(vector<string>& strs) 
    {
        
        string ans;
        char len;
        for (auto x : strs)
        {
            ans=ans+x+"#|";
        }

        return ans;

    }

    vector<string> decode(string s) 
    {
        vector<string> ans;
        string str;
        for (int i =0 ; i<s.size();i++)
        {
            if(s[i] =='#')
            {
                if( (i+1)<s.size() && s[i+1] =='|' )
                {
                    ans.push_back(str);
                    str="";
                }
                else
                {
                    str=str+s[i];
                }

            }
            else if(s[i] !='|')
            {
                str=str+s[i];
            }
            else if(s[i] =='|' && s[i-1] !='#')
            {
                str=str+s[i];
            }           
        }
        return ans;

    }
};
