class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int n=nums.size();
        int i=0;
        int max=INT_MIN, sum=0;
        while(i<n)
        {
            sum=sum+nums[i];
            if ( sum < 0 )
            {
                if(max < sum)
                {
                    max=sum;
                }
                sum=0;
            }
            else if (sum >= 0)
            {
                if(max < sum)
                {
                    max=sum;
                }
            }

            i++;
        }
        return max;
    }
};
