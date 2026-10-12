class Solution {
public:

  int count;
  

  void merge(vector<int>&a,vector<int>&b,vector<int>&c)
  {
      int i=0,j=0,k=0;
      while(i<a.size()&&j<b.size())
      {
          if(a[i]>b[j])
          {
              c.push_back(b[j]);
              
              j++;
              k++;
          }
          else{
              c.push_back(a[i]);
              i++;
              k++;
          }
      }
      while(i<a.size())
      {
          c.push_back(a[i]);
          i++;
          k++;
      }
        while(j<b.size())
      {
          c.push_back(b[j]);
          j++;
          k++;
      }
  }
  int inversionpair(vector<int>&a,vector<int>&b)
  {
    int i=0,j=0;
    int m=a.size(),n=b.size();
    int cnt=0;
    while(i<m&&j<n)

    {
        if((long long) a[i]>2LL*b[j])
        {
             cnt+=m-i;
             j++;

        }
        else
        {
            i++;
        }
    }
     return cnt;
  }
   void mergesort(vector<int>&arr)
   {  int n=arr.size();
      if(n<=1) return;
      vector<int>a;
      vector<int>b;

      int idx=0;
      for(int i=0;i<n/2;i++)
      {
          a.push_back(arr[idx++]);
      }
      for(int i=0;i<n-n/2;i++)
      {
          b.push_back(arr[idx++]);
      }
      mergesort(a);
       mergesort(b);
       arr.clear();
       count+= inversionpair(a,b);
       merge(a,b,arr);




   }
    int reversePairs(vector<int>& nums) {
         count=0;
         mergesort(nums);
         return count;
    }
};
