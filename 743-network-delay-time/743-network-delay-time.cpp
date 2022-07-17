class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
     vector<vector<vector<int>>> graph (n+1) ;
        for(int i=0;i<=n;i++)
        {
            graph.push_back({{}});
        }
        for(vector<int>edge:times)
        {
            int source = edge[0];
            int dest = edge[1];
            int cost =edge[2];
            graph[source].push_back({dest,cost});
        }
        
        vector<int> cost(n+1,0);
        cost[k]=0;
        vector<bool>vis(n+1,false);

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,k});
        while(!pq.empty())
        {
            pair<int,int> p =pq.top();
            int currNode=p.second;
            int currCost=p.first;
            pq.pop();
            if(vis[currNode]) continue;
            vis[currNode]=true;
            cost[currNode]=currCost;
            for(int i=0;i<graph[currNode].size();i++)
            {
                int Node=graph[currNode][i][0];
                int weight=graph[currNode][i][1];
                if(vis[Node]) continue;
                pq.push({currCost+weight,Node});
            }
        }
        for(int i=1;i<=n;i++)
            if(vis[i]==0) return -1;
        
        int ans=0;
        for(int x:cost)
            ans=max(ans,x);
        return ans;
    }
};