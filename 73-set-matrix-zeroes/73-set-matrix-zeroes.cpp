class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=0;
        int column=0;
        
        
        for(int i=0;i<matrix.size();i++)
        {   for(int j=0;j<matrix[0].size();j++)
            {   
                
                if(matrix[i][j]==0)
                {if(i==0)row=1;
                 if(j==0)column=1;
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }}
        
         for(int i=1;i<matrix.size();i++)
         {  for(int j=1;j<matrix[0].size();j++)
            {if(matrix[i][0]==0||matrix[0][j]==0)
            {
                matrix[i][j]=0;
            }
            }}
        
        
        if(row==1)
        { for(int i=0;i<matrix[0].size();i++)
            {
                matrix[0][i]=0;
            }}
        if(column==1)
        {  for(int i=0;i<matrix.size();i++)
            {
                matrix[i][0]=0;
            }}
    }
};