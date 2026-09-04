class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k)
    {
        //if(nums[0]==0) return 0;
        int n=nums.size();
        if(n==1)
        {
           return 0;
        }
        vector<int>right(n);
            right[n - 1] = nums[n - 1];
        for(int i=n-2;i>=0;i--)
        {
            if(right[i+1]==nums[i])
            {
                right[i]=nums[i];
            }else
            {
                right[i]=min(right[i+1],nums[i]);
            }
        }
        int left=nums[0];

        for(int i=0;i<n;i++)
        {
            left=max(nums[i],left);
            if(left-right[i]<=k) return i;
        }
        return -1;
    }
};