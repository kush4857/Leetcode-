class Solution {
public:
    int compress(vector<char>& v) {
        int n=v.size();
        string  ans="";
        int i=0,j=0;
        
        while(j<n)

        { 
            
             char ch=v[i];
            if(v[j]==ch)
            {
                j++;
            }
            else
            {
                int len=j-i;
            
               ans.push_back(ch);
                 if(len!=1)
                  ans += to_string(len);
                
                i=j;
            }
        }
        
                int len=j-i;
            
               ans.push_back(v[i]);
             if(len!=1)  ans += to_string(len);
             
                i=j;
        vector<char>ans2;
        for(char ch:ans)
        {
            ans2.push_back(ch);
        }
     v=ans2;
   return v.size(); }
};
