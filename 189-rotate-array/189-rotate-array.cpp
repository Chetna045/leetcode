class Solution {
public:
    void reverse(vector<int>& arr,int l,int r)
    {
        if(arr.size()==0||arr.size()==1)
            return;
        while(l<r)
        {
            int temp=arr[l];
            arr[l]=arr[r];
            arr[r]=temp;
            l++, r--;
        }
    }
    void rotate(vector<int>& nums, int k) {
       /* if(k>nums.size())
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
        }*/
      
        /*for(int i=0;i<k;i++)
            for(int j=nums.size()-1;j>0;j--)
            {
                int temp=nums[j];
                nums[j]=nums[j-1];
                nums[j-1]=temp;
                
            }
            */
        k=k%nums.size();
        int n=nums.size()-k;
        reverse(nums,0,n-1);
        reverse(nums,n,nums.size()-1);
        reverse(nums,0,nums.size()-1);
        }
};