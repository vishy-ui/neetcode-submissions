class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int n=nums.size();
        int mi=0;
        for (int i=0;i<n;i++)
        {
            if ( i > mi )
            {
                return false;
            }
            int x=i+nums[i];
            if( x > mi )
            {
                mi=x;
            }
        }
        return true;
    }
};