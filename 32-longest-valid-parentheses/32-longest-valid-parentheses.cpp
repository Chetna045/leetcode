class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        if(s.length()==0)
        {return 0;}
        st.push(-1);
        int maxi=0;
        for(int i=0;i<s.length();i++)
        {
            int ch=s[i];
            if(ch=='(')
                
            {st.push(i);}
            else
                
            {
                if(!st.empty())
                {
                    st.pop();
                }
                if(!st.empty())
                {
                maxi=max(maxi,i-st.top());
                    
                }
                else
                {
                    st.push(i);
                }
            }}
            return maxi;
    }
};