class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>c;
        int i=0,j=0,k=0;
        int m=nums1.size();
        int n=nums2.size();
        while(i<m&&j<n)
        {
            if(nums1[i]<nums2[j])
            {
                c.push_back(nums1[i]);
                i++;
                k++;
            }
            else{
                c.push_back(nums2[j]);
                j++;
                k++;
            }
        }
        while(i<m)
        {
            c.push_back(nums1[i]);
            i++;
            k++;
        }
        while(j<n)
        {
            c.push_back(nums2[j]);
            j++;
            k++;
          }
          int size=m+n;
          if(size%2==1)
          {
              return c[size/2];
          }
          else
          {
              return (c[size/2]+c[size/2-1])/2.0 ;
          }
          }
};
