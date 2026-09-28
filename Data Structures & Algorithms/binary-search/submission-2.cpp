class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int low=0, high=n-1;
        int mid=-1;
        while (low != high)
        {
            mid=(high+low)/2;
            if(target > nums[mid])
            {
                low=mid+1;
            }
            else if(target < nums[mid])
            {
                high=mid;
            }
            else if(target == nums[mid])
            {
                return mid;
            }
        }
        if (low==high && nums[low]== target)
        {
            return low;
        }
        else 
        {
            return -1;
        }
    }
};
