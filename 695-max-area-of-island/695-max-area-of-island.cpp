class Solution {
public:
     int MaxArea(vector<vector<int>>&grid,int i,int j,int row,int col)
    {
        if(i<0||i>=row||j<0||j>=col||grid[i][j]==0)
            return 0;
        grid[i][j]=0;
         int count =1;
        count+=MaxArea(grid,i+1,j,row,col);
        count+=MaxArea(grid,i-1,j,row,col);
        count+=MaxArea(grid,i,j-1,row,col);
        count+=MaxArea(grid,i,j+1,row,col);
         return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==1)
                {
                    ans=max(ans,MaxArea(grid,i,j,row,col));
                }
            }
        return ans;
        
    }
};