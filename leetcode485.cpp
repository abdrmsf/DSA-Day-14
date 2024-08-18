class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
       int max_count=0;
   int current_count=0;
   for(int i=0;i<v.size();i++)
   {
       if(v[i]==1)
       {
         current_count+=1;  
       }
       else
       {
           if(current_count>max_count)
           {
               max_count=current_count;
           }
           current_count=0;
       }
   }
   if(current_count>max_count)
           {
               max_count=current_count;
           }
   return max_count; 

    }
};