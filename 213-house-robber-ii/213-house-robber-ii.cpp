class Solution {
public:
    int helper(vector<int>&nums,int s,int n)
    { int curr=0,prev=0;
     
        for(int i=s;i<n;i++)
        { int temp=curr;
         curr=max(curr,prev+nums[i]);
         prev=temp;
            
        }
     return curr;
    }
    int rob(vector<int>& nums) {
       int n;
        if((n=nums.size())==1)
            return nums[0];
        else
            return max(helper(nums,0,n-1),helper(nums,1,n));
        
    }
};