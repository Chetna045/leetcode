class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount<0||coins.size()==0)
        {
            return 0;
        }
        int n=coins.size();
        int dp[amount+1];
        dp[0]=0;
        for(int i=1;i<=amount;i++)
        {
            dp[i]=INT_MAX;
            
        }
        for(int i=1;i<amount+1;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(coins[j]<=i)
                {
                    int rest=dp[i-coins[j]];
                    if(rest!=INT_MAX && rest+1<dp[i])
                    {
                        dp[i]=rest+1;
                    }
                }
            }
        }
        return dp[amount]==INT_MAX?-1:dp[amount];
        
    }
};