class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>minutes;
        for(int i=0;i<timePoints.size();i++)
        {
        int hours=stoi(timePoints[i].substr(0,2));
        int min=stoi(timePoints[i].substr(3,2));
        int totalminutes=hours*60+min;
        minutes.push_back(totalminutes);
        }
        sort(minutes.begin(),minutes.end());
        int n=minutes.size();
        int mini=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            int diff=minutes[i+1]-minutes[i];
            mini=min(diff,mini);
        }
        int finaldiff1=(minutes[0]+1440)-minutes[n-1];
        int finaldiff2=(minutes[n-1]-minutes[0]);
        int finaldiff=min(finaldiff1,finaldiff2);
        mini=min(finaldiff,mini);
        return mini;
    }
};