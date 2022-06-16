class Solution {
public:
    bool isAnagram(string s, string t) {
     vector<int> x(256);
        if(s.size()!=t.size())
        {
            return false;
        }
        else
        {
            for(int i =0;i<s.size();i++)
            {
                x[s[i]]+=1;
            x[t[i]]-=1;}
            for(int i=0;i<x.size();i++)
            {
             if(x[i]!=0)
             {return false;}
            }
          
             return true;    
        }
        
        
    }
};