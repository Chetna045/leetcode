// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string longestPalindrome(string s){
        // code here 
         if (s.size()==0||s.length()<1)return"";
        string res="";
        int start,end=0;
        int len=0;
        //for odd substrings
        for(int i=0;i<s.length();i++)
        {
            int l=i,r=i;
            while(l>=0&&r<s.length()&&s[l]==s[r])
            {if(r-l+1>len)
            {
               // res=s.substr(l,r-l+1);
               start=l,end=r;
                len=r-l+1;}
                l--;
                r++;
            }
        
        
         l=i,r=i+1;
            while(l>=0&&r<s.length()&&s[l]==s[r])
            {if(r-l+1>len)
            {
                //res=s.substr(l,r-l+1);
                start=l,end=r;
                len=r-l+1;}
                l--;
                r++;
            }}
            for(int i=start;i<=end;i++)
            {
                res+=s[i];
            }
        
        return res;
        
    }
};

// { Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends