class Solution {
public:
    int rob(vector<int>&nums,vector<int>&dp,int i)
    {
        if(i>=size(nums))
            return 0;
        if(dp[i]!=-1)return dp[i];
        return dp[i]=max(rob(nums,dp,i+1),rob(nums,dp,i+2)+nums[i]);
    }
    int rob(vector<int>& nums) {
       vector<int> dp(nums.size(),-1);
        return rob(nums,dp,0);
    }
    
  
        
    
};