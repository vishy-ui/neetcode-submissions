class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> c= nums;
        for (int i = 0; i < n; ++i) 
        {
            for (int j = i+1; j < n; ++j) 
            {
                if (nums[i] == nums[j])
                {
                    return true;
                }
                else
                {
                    continue;
                }
            }
        }
        return false;
    }
};