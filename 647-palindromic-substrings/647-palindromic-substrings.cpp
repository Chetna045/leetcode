class Solution {
public:
    int countSubstrings(string s) {
         if (s.size()==0||s.length()<1)return 0;
      //  string res="";
      //   int len=0;
        int count=0;
        //for odd substrings
        for(int i=0;i<s.length();i++)
        {
            int l=i,r=i;
            while(l>=0&&r<s.length()&&s[l]==s[r])
            {  
                count++;
                l--;
                r++;
            }
        
        
         l=i,r=i+1;
            while(l>=0&&r<s.length()&&s[l]==s[r])
            {  count++;
                l--;
                r++;
            }}
        
        return count;
        
    }
};