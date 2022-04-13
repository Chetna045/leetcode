class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>result;
        int i=0,n=intervals.size();
        while(i<n&&intervals[i][1]<newInterval[0])
            result.push_back(intervals[i++]);
        vector<int>mi=newInterval;
        while(i<n&&intervals[i][0]<=newInterval[1])
        {
            mi[0]=min(intervals[i][0],mi[0]);
             mi[1]=max(intervals[i++][1],mi[1]);
            
        }
        result.push_back(mi);
        while(i<n)result.push_back(intervals[i++]);
        return result;
    }
};