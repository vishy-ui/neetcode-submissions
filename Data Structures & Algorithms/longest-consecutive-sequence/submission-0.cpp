class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        map<int, int> mp;
        for (auto x : nums) {
            mp[x]++;
        }
        auto f = mp.begin();
        int fnum = f->first;
        int c = 0;
        for (auto n : mp) {

            if (n.first == fnum) {
                c++;
                fnum++;
                if (c > ans) {
                    ans = c;
                }
            } else {
                c = 1;
                fnum = (n.first) + 1;
            }
        }
        return ans;
    }
};