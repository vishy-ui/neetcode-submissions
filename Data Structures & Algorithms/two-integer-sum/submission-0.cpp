class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};
        for (int i = 0; i < nums.size(); i++) {

            if (target < 0) 
            {
                if (nums[i] >= target) 
                {
                    for (int j = i + 1; j < nums.size(); j++) 
                    {
                        if (nums[j] == (target - nums[i])) 
                        {
                            return ans = {i, j};
                        }
                    }
                }
                else if(nums[i] < target)
                {
                    for (int j = i + 1; j < nums.size(); j++) 
                    {
                        if (nums[j] == (target + nums[i])) {
                            return ans = {i, j};
                        }
                    }
                }
            }
            if (nums[i] <= target) 
            {
                for (int j = i + 1; j < nums.size(); j++) 
                {
                    if (nums[j] == (target - nums[i])) {
                        return ans = {i, j};
                    }
                }
            }
            else if(nums[i] > target)
            {
                for (int j = i + 1; j < nums.size(); j++) 
                {
                    if (nums[i] == (target - nums[j])) {
                        return ans = {i, j};
                    }
                }
            }
        }

        return ans;
    }
};