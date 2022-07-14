class Solution {
public:
    bool path(int src,int dest,vector<vector<int>>&graph,vector<int>&vis)
    {
        if(src==dest)return true;
        vis[src]=1;
        for(int i=0;i<graph[src].size();i++)
        {
            if(vis[graph[src][i]]==false)
            {
                if(path(graph[src][i],dest,graph,vis)==true)
                    return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int src, int dest) {
        
        vector<vector<int>>graph(n);
        for(int i=0;i<edges.size();i++)
        {
            int v1=edges[i][0];
            int v2=edges[i][1];
            graph[v1].push_back(v2);
            graph[v2].push_back(v1);
        }
        vector<int>vis(n,0);
        return path(src,dest,graph,vis);
    }
    
};