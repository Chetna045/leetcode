class Solution {//up,Down,Left,right
public:
    void Fill(vector<vector<int>>&image,int i,int j,int m,int n,int currColor,int newColor)
    {
        if(i<0||i>=m||j<0||j>=n||image[i][j]==newColor||image[i][j]!=currColor)
            return;
        image[i][j]=newColor;
        Fill(image,i+1,j,m,n,currColor,newColor);
        Fill(image,i-1,j,m,n,currColor,newColor);
        Fill(image,i,j-1,m,n,currColor,newColor);
        Fill(image,i,j+1,m,n,currColor,newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        int currColor=image[sr][sc];
        Fill(image,sr,sc,m,n,currColor,color);
        return image;
      }
};