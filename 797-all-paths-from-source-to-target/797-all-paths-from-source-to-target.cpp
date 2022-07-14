class Solution {
public:
    void findAllPaths(vector<vector<int>>&graph,int currNode,vector<int>&vis,int n,vector<int>&currPath,vector<vector<int>>&res)
    {
        if(currNode==n-1)
        {res.push_back(currPath);
        return;}
        if(vis[currNode]==1) return;
        vis[currNode]=1;
        for(auto adj:graph[currNode])
        {
            currPath.push_back(adj);
            findAllPaths(graph,adj,vis,n,currPath,res);
            currPath.pop_back();
            
        }
            vis[currNode]=false;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        vector<int> currPath;
        int n=graph.size();
        vector<int>vis(n,0);
        currPath.push_back(0);
        findAllPaths(graph,0,vis,n,currPath,res);
        return res;
        
    }
};