class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int n= nums.size();
        int l=0,h=n-1,mid;
        int ans=100;
        while (l<=h)
        {
            //cout <<"l= " <<l<<" h= " <<h<<endl;   
            if (  nums[h] > nums[l] )
            {
                if(ans > nums[l])
                {
                    ans=nums[l];
                }
                break;
            }

            mid=(l+h)/ 2;
            if(ans > nums[mid])
            {
                ans=nums[mid];
            }
            if ( nums[mid] >= nums[l])
            {
                l=mid+1;
            }
            else if ( nums[l] > nums[mid])
            {
                h=mid-1;
            }
        }
        return ans;
    }
};