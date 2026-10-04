class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {   
        vector <int> n1=nums1;
        int i=0,l=0,r=0;
        while ( l<m && r<n )
        {
            if (n1[l] <= nums2[r])
            {
                nums1[i++]=n1[l++];
            }
            else if( n1[l] > nums2[r] )
            {
                nums1[i++]=nums2[r++];
            }
        }
        while( l<m )
        {
            nums1[i++]=n1[l++];
        }
        while ( r<n )
        {
            nums1[i++]=nums2[r++];
        }
    }
};