class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) 
    {
        int t;
        stack <int> fleet;
        map<int,int , greater <int>> mp;
        for(int i=0;i< position.size() ; i++)
        {
            mp[position[i]] = speed[i];
        }
        for (auto x :mp)
        {
            if (fleet.empty())
            {
                fleet.push(x.first);
            }
            else
            {
                int f=fleet.top();
                double tf= (target-f)/ double(mp[f]);
                double tx= (target - x.first )/ double(x.second);
                
                // cout << x.second <<endl;
                if ( tf >= tx)
                {
                    if(mp[f] > x.second)
                    {
                        // cout << "tf="<< tf << "tx="<< tx <<endl;
                        mp[f]=x.second;
                    }
                }
                else
                {
                    // cout << "ttf="<< tf << "tx="<< tx <<endl;
                    fleet.push(x.first);
                }
            }
        }
        int x =fleet.size();
        return x;
    }
};