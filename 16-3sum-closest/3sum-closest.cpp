class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        int n = nums.size();
        vector<int> sums; 
        sort(nums.begin(), nums.end());

       
        for(int i = 0; i < n - 2; i++)
        {
            int left = i + 1;
           
            int right = n - 1; 

            while(left < right) 
            {
             
                
                int current_sum = nums[left] + nums[i] + nums[right];
                
                if(current_sum == target)
                {
                    return current_sum;
                }
                else
                {
                    sums.push_back(current_sum); 
                    if (current_sum < target) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }
        int closest = sums[0];
        
        for(int i = 1; i < sums.size(); i++)
        {
           
            if(abs(sums[i] - target) < abs(closest - target)) 
            {
                closest = sums[i];
            }
        }
        
        return closest;
    }
};