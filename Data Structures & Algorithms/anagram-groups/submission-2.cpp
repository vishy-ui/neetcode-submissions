class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
            vector<vector<string>> ans;
            unordered_map<string , vector<string>> mp;
            for (auto each_str:strs)
            {
                string key=each_str;
                sort(key.begin(),key.end());

                mp[key].push_back(each_str);
            }
            for(auto each_d : mp)
            {
                ans.push_back(each_d.second);
            }
            return ans;
    }
};
