class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {   
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector <int> a(3);
        int n=nums.size();

        for (auto x : nums)
        {cout << x <<" , ";}

        for(int i= 0 ; i < n-2 ;i++)
        { 
            int begin=i+1, end=n-1;
            
            //cout << nums[begin] <<" " << nums[end] <<" " <<nums[i] <<endl;
            // cout<<"\n";

            if ( i>0 && nums[i] == nums[i-1] )
            {
                continue;
            }

            while(begin < end)
            {
                //cout <<nums[i] <<" "  << nums[begin] <<" " << nums[end]  <<endl;
                
                if ( (nums[begin]+nums[end] + nums[i] == 0 )  )
                {
                    a[0]=nums[i];
                    a[1]=nums[begin];
                    a[2]=nums[end];
                    ans.push_back(a);
                    begin++;
                    end--;
                    while (begin < end && nums[begin] == nums[begin - 1])
                    {
                        begin++;
                    }

                    while (begin < end && nums[end] == nums[end + 1])
                    {
                        end--;
                    }
                    
                }
                else if (nums[begin]+nums[end] + nums[i] > 0)
                {
                    end--;
                }
                else if (nums[begin]+nums[end] + nums[i]< 0)
                {
                    begin++;
                }
            }
        }
        return ans;
    }
};
