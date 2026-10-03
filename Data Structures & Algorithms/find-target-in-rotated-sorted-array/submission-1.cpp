class Solution {
public:
    int bs(int l , int r , vector<int>& nums, int t )
    {
        int ll=l,rr=r;
        while(ll <= rr)
        {
            int mid= ll+(rr-ll)/2;
            if( nums[mid] == t)
            {
                return mid;
            }
            else if ( nums[mid] > t)
            {
                rr=mid-1;
            }
            else if ( nums[mid] < t)
            {
                ll=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int l=0 ,r=n-1;
        while( l <= r )
        {
            int mid= l+(r-l)/2;
            if( nums[mid] == target )
            {
                return mid;
            }

            else if ( nums[l] <= nums[mid] )
            {
                if (target > nums[mid])
                {
                    l=mid+1;
                }
                else
                {
                    int i=bs(l,mid-1,nums,target);
                    if (i==-1)
                    {
                        l=mid+1;
                    }
                    else
                    {
                        return i;
                    }
                }
            }
            else if ( nums[mid] <= nums[r] )
            {
                if (target < nums[mid])
                {
                    r=mid-1;
                }
                else 
                {
                    int i=bs(mid+1,r,nums,target);
                    if (i==-1)
                    {
                        r=mid-1;
                    }
                    else
                    {
                        return i;
                    }
                }
            }
        }
        return -1;
    }
};