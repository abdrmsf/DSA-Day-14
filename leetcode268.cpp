class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,total=0;
        for(int i=1;i<=nums.size();i++)
        {
            sum=sum+nums[i-1];
            total=total+i;
        }
        return total-sum;
    }
};