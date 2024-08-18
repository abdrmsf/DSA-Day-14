class Solution {
public:
int expandaroundindex(string s,int left,int right)
{
    int count=0;
    while(left>=0 && right<s.length() && s[left]==s[right])
    {
        count++;
        left--;
        right++;
    }
return count;
}
    int countSubstrings(string s) {
        int totalcount=0;
        int n=s.length();
        for(int center=0;center<n;center++)
        {
            //odd case
            int oddKaAns=expandaroundindex(s,center,center);
            totalcount=totalcount+oddKaAns;
            int evenKaAns=expandaroundindex(s,center,center+1);
            totalcount=totalcount+evenKaAns;
        }
        return totalcount;
    }
};