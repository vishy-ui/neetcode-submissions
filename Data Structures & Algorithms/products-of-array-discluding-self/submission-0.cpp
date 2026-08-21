class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int> ans;
        int n = nums.size();
        vector<int> pre(n);
        vector<int> post(n);
        int a;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                pre[i] = 1 * nums[i];
                post[n - 1 - i] = 1 * nums[n - 1 - i];
            } else {
                pre[i] = pre[i - 1] * nums[i];
                post[n - 1 - i] = post[n - i] * nums[n - 1 - i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                a = 1 * post[i + 1];
            } else if (i == n - 1) {
                a = pre[i - 1] * 1;
            } else {
                a = pre[i - 1] * post[i + 1];
            }
            ans.push_back(a);
        }
        return ans;
    }
};
