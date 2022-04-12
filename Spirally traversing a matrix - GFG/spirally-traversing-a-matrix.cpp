// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    { vector<int> ans;
    
     int top=0,left=0,right=c-1,down=r-1,dir=0;
     while(top<=down&&left<=right)
     {
         if(dir==0)
         {
             for(int i=left;i<=right;i++)
             {
                 ans.push_back(matrix[top][i]);
             }
             top+=1;
         }
         else
         if(dir==1)
         {
             for(int i=top;i<=down;i++)
             {
                 ans.push_back(matrix[i][right]);
             }
             right-=1;
         }
          else
         if(dir==2)
         {
             for(int i=right;i>=left;i--)
             {
                 ans.push_back(matrix[down][i]);
             }
             down-=1;
         }
          else
         if(dir==3)
         {
             for(int i=down;i>=top;i--)
             {
                 ans.push_back(matrix[i][left]);
             }
            left+=1;
         }
         
         dir=(dir+1)%4;
         
     }
        // code here 
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends