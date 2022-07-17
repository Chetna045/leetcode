class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<vector<int>>graph(n);
        for(auto it:prerequisites)
        {
            int v=it[1];
            int u=it[0];
            graph[v].push_back(u);
        }
        vector<int>indegree(n,0);
        for(int i=0;i<n;i++)
            for(int it:graph[i])
                indegree[it]++;
        queue<int>q;
        int ans=0;
        unordered_set<int> vis;
        for(int i=0;i<n;i++)
            if(indegree[i]==0)
            {
                q.push(i);
                ans++;
            }
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            if(vis.find(curr)!=vis.end())
                continue;
            vis.insert(curr);
            for(int adj:graph[curr])
            {
                indegree[adj]--;
                if(indegree[adj]==0)
                {
                    q.push(adj);
                    ans++;
                }
            }
        }
        if(ans==n)return true;
        return false;
    }
};