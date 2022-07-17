class Solution {
public:
    bool dfs(vector<vector<int>>&graph,int i,vector<int>&vis,vector<int> &rs,vector<int>&traversal)
    {
        vis[i] = 1;
        rs[i] =1;
        for(int adj:graph[i])
        {
            if(vis[adj]==0)
            {
                if(dfs(graph,adj,vis,rs,traversal))
                    return true;
            }
            else if(rs[adj]==1) return true;
        }
        traversal.push_back(i);
        rs[i]=0;
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<vector<int>>graph(n);
        for(auto it:prerequisites)
        {
            int v=it[1];
            int u=it[0];
            graph[v].push_back(u);
        }
        vector<int> vis(n,0),rs(n,0),traversal;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
                if(dfs(graph,i,vis,rs,traversal)) return{};
        }
        reverse(traversal.begin(),traversal.end());
        return traversal;
    }
};