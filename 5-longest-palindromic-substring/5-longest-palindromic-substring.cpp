class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size()==0||s.length()<1)return"";
        string res="";
        int len=0;
        //for odd substrings
        for(int i=0;i<s.length();i++)
        {
            int l=i,r=i;
            while(l>=0&&r<s.length()&&s[l]==s[r])
            {if(r-l+1>len)
            {
                res=s.substr(l,r-l+1);
                len=r-l+1;
            }
                l--;
                r++;
            }
        
        
         l=i,r=i+1;
            while(l>=0&&r<s.length()&&s[l]==s[r])
            {if(r-l+1>len)
            {
                res=s.substr(l,r-l+1);
                len=r-l+1;
            }
                l--;
               r++;
            }}
        
        return res;
        
    }
};