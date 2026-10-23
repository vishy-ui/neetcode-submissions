class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int i=digits.size();
        int n=i;
        vector <int> ans=digits;
        if(digits[i-1] < 9 )
        {
            digits[i-1]++;
        }
        else
        {
            while( i!=0 && digits[i-1]==9)
            {
                digits[i-1]=0;
                i--;
            }
            if(i>0)
            {
                digits[i-1]++;
            }
            else
            {
                vector <int>a (n+1);
                a[0]=1;
                digits=a;
            }
        }
        return digits;
        
    }
};