class Solution {
public:
    bool isValid(string s) {
        
         stack<char>st;
       
        for(int i=0;i<s.length();i++)
        {   
             char temp=s[i];
            if(!st.empty())
            {
                switch(temp)
                {     
                    case')':if(st.top()=='(')
                {st.pop();continue;}
                      break;
                   case ']':if(st.top()=='[')
                   {  st.pop();
                    continue;}
                      break;
                  case '}':if(st.top()=='{')
                  {  st.pop();
                   continue;}
                      break;
                  
                  
                
                }   }
            st.push(temp);    
            }
            
            
            return st.empty();}
        
      
      /*  bool flag=true;
        stack<char>st;
        unordered_map<char,char>m={{')','('},{'}','{'},{']','['}};
        for(int i=0;i<s.length()&&flag;i++)
            {
            char temp=s[i];
            if(m.find(temp)==m.end())
                st.push(temp);
            else
            if(st.empty())            
            {return false;}
            else
                if(st.top()==m[temp])st.pop();
            else
                return false;
            
                }
        if(!st.empty())
            return false;
            else
                return true;
        }*/
        
        
    
};