class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int>ans;
        
        unordered_map<int,int>mp;
        for (auto x: nums)
        {
            mp[x]++;
        }

        map<int,vector<int>,greater<int>> freq;
        for(auto x : mp)
        {
            freq[x.second].push_back(x.first);
        }
        for(auto x:freq)
        {
            for (auto y: x.second)
            {
                if(k==0){return ans;}
                ans.push_back(y);
                k--;
            }
        }
        return ans;
    }
}; 