class Solution {
public:
    void countIsland(vector<vector<char>>&grid,int i,int j,int row,int col)
    {
        if(i<0||i>=row||j<0||j>=col||grid[i][j]=='0')
            return;
        grid[i][j]='0';
        countIsland(grid,i+1,j,row,col);
        countIsland(grid,i-1,j,row,col);
        countIsland(grid,i,j-1,row,col);
        countIsland(grid,i,j+1,row,col);
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    countIsland(grid,i,j,row,col);
                }
            }
        return ans;
    }
};