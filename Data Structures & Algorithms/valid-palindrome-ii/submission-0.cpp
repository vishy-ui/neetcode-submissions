class Solution {
public:

    bool ispalindrome(string s,int f,int b)
    {
        int front=f, back=b;
        while (front<=back)
        {
            if (s[front] == s[back] )
            {
                front++;
                back--;
            }
            
            else
                {
                    return false;
                }
        }
        return true;
    } 
    
    bool validPalindrome(string s) 
    {
        int n=s.size();
        int front=0 , back=n-1;
        while (front<=back)
        {
            if (s[front] == s[back] )
            {
                front++;
                back--;
            }
            else if (s[front] != s[back] )
            {
                if (ispalindrome(s,front+1,back))
                {
                    front++;
                   
                }
                else if (ispalindrome(s,front,back-1))
                {
                    back--;
                    
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};