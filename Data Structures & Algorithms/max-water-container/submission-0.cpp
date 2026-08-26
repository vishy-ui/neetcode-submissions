class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int n=height.size();
        int b=0, e=n-1;
        int ans=0,ar;
        while ( b < e )
        {
            if(height[b]==0)
            {
                b++;
                continue;
            }
            if(height[e]==0)
            {
                e--;
                continue;
            }
            if( height[b] > height[e] )
            {
                ar=height[e] * (e-b);
                if (ar > ans)
                {
                    ans=ar;
                }
                e--;
            }
            else if( height[b] < height[e] )
            {
                ar=height[b] * (e-b);
                if (ar > ans)
                {
                    ans=ar;
                }
                b++;
            }
            else if( height[b] == height[e] )
            {
                ar=height[e] * (e-b);
                if (ar > ans)
                {
                    ans=ar;
                }
                b++;
                e--;
            }
        }
        return ans;
        
    }
};