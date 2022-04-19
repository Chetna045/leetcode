class Solution {
public:
   /* int rob(vector<int>&nums,vector<int>&dp,int i)
    {
        if(i>=size(nums))
            return 0;
        if(dp[i]!=-1)return dp[i];
        return dp[i]=max(rob(nums,dp,i+1),rob(nums,dp,i+2)+nums[i]);
    }*/
    int rob(vector<int>& nums) {
       /*//1st appr
       vector<int> dp(nums.size(),-1);
        return rob(nums,dp,0);*/
     
        /* //second approach
        if(size(nums)==1)
            return nums[0];
        vector<int>dp(nums);
       // dp[0]=0;
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<size(nums);i++)
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        
        return dp[size(nums)-1];*/
            //third approach
        if(nums.size()==1)
            return nums[0];
        int prev=0;
        int curr=0;
        for(auto num :nums)
        {int temp=curr;
         curr=max(curr,prev+num);
         prev=temp;
         }
        return curr;
    }
    
  
        
    
};