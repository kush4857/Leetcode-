class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v) {
        vector<int>ans;
    
     int i=0,j=0;
      int minr=0,maxr=v.size()-1,minc=0,maxc=v[i].size()-1;
     

    while(minr<=maxr&&minc<=maxc)
    {
        for(int j=minc;j<=maxc;j++)
        {
             ans.push_back(v[minr][j]);
             
        }
        minr++;
        for(int i=minr;i<=maxr;i++)
        {
             ans.push_back(v[i][maxc]);
             
        }
        maxc--;
        if (minr <= maxr) {
        for(int j=maxc;j>=minc;j--)
        {
             ans.push_back(v[maxr][j]);
             
        } maxr--;
        }if (minc <= maxc) {
        for(int i=maxr;i>=minr;i--)
        {
             ans.push_back(v[i][minc]);
             
        }minc++;
        }
    }
      return ans; 
    }
};
