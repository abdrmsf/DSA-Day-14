class Solution {
public:
    void moveZeroes(vector<int>& v)
    {
    int start=0;
   int end=v.size()-1;
   vector<int>r(v.size(),0);
   int i=0;
   while(start<=end)
   {
       if(v[i]==0)
       {
           r[end]=0;
           end--;
       }
       else
       {
           r[start]=v[i];
           start++;
       }
    i++;
   }
   v=r;
    }
};