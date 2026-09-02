class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        int s=nums.size();
        int flag=0;
       
        // int right=s-1;
        // int left=0;
        // for(int i=0;i<s;i++){ 
        //     left=i;
        //     right=s-1;
           
        //     while(left<right)
        //     {
        //         if(nums[left]==nums[right])
        //         {
        //             flag=1;
        //             break;
        //         }else
        //         {
        //             right--;
        //         }
        //     }

        // }
        sort(nums.begin(),nums.end());

        for(int i=0;i<s;i++)
        {
            if(i==s-1) break;
            if(nums[i]==nums[i+1]) 
            {
                flag=1;
                break;
            }   
        }
        if(flag==0)return false;
        else return true;  
    }
};