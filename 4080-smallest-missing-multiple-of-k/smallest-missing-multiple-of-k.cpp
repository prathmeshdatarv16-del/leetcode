class Solution {
public:
    int missingMultiple(vector<int>& nums, int k)
    {
        vector<int>mul;
        int s=nums.size();
        int count=1;
        for(int i=0;i<=s && count<=s+1;i++)
        {
            int x=k*count;
            mul.push_back(x);
            count++;
        }
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<=s;j++)
            {
                if(nums[i]==mul[j])
                {
                    mul[j]=-1;

                }
            }
            if(i==s-1)
            {

            }
        }
        //5,10,15,20,25,30
        int r=0;
        for(int i=0;i<mul.size();i++)
        {
            if(mul[i]!=-1)
            {
                r=mul[i];
                break;
            }
        }
        return r;
    }
};