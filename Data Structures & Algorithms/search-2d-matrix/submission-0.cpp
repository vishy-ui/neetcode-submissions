class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m,n;
        m=matrix.size();
        n=matrix[0].size();

        int l=0,h=m-1,midm=0,midn;

        if( matrix[m-1][n-1] < target)
        {
            return false;
        }
        
        if( matrix[0][0] > target)
        {
            return false;
        }


        while(l < h)
        {   
            midm= (h+l)/2;
            if( matrix[midm][n-1] < target )
            {
                l=midm+1;
            }
            else if( matrix[midm][n-1] > target && matrix[midm][0] > target  )
            {
                h=midm-1;
            }
            else if( matrix[midm][n-1] >= target && matrix[midm][0] <= target )
            {
                break;
            }
        }
        
        if (l==h)
        {
            if( matrix[l][n-1] >= target && matrix[l][0] <= target )
            {
                midm=l;
            }
            else 
            {return false;}
        }
        l=0;
        h=n-1;
        midn=0;
        while (l < h )
        {
            midn=(l+h)/2;
            if (matrix[midm][midn] < target)
            {
                l=midn+1;
            }

            else if (matrix[midm][midn] > target)
            {
                h=midn-1;
            }
            else if (matrix[midm][midn] == target)
            {
                
                return true;
            }
        }
        if (l==h)
        {
            if (matrix[midm][l] == target)
            {
                return true;
            }
        }
        return false;
    }
};