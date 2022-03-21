class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k>nums.size())
            k=k%nums.size();
        int ans[nums.size()];
        for(int i=0;i<k;i++)
        {
            ans[i]=nums[nums.size()-k+i];
        }
        int j=0;
        for(int i=k;i<nums.size();i++)
        {    ans[i]=nums[j];
        j++;
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=ans[i];
        }
    }
};