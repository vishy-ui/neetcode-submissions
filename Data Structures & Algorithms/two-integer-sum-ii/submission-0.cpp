class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int n=numbers.size();
        int front=0,end=n-1;
        vector<int> ans(2) ;
        while (front<=end)
        {
            if (numbers[front] + numbers[end]== target)
            {
                ans[0]=front+1;
                ans[1]=end+1;
                return ans;
            }
            else if (numbers[front] + numbers[end] > target)
            {
                end--;
            }
            else if (numbers[front] + numbers[end] < target)
            {
                front++;
            }
        }
        return ans;
    }
};