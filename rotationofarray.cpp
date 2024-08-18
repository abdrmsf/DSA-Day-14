#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
int k;
cin>>k;
vector<int>nums{1,2,3,4,5,6,7};
vector<int>rotated(nums.size());
for(int i=0;i<nums.size();i++)
{
    rotated[(i+k)%nums.size()]=nums[i];
}
for(int i=0;i<nums.size();i++)
{
    cout<<rotated[i]<<" ";
}
return 0;
}