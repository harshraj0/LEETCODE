class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        if(n==1)
        {
            return 0;
        }
        for( i=0;i<nums.size();i++)
        {
            if(i!=0 && i<n-1)
            {
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
            {
                break;
            }
            }
            else if(i==0 && nums[i]>nums[i+1])
            {
                break;
            }
            else if (i==n-1 && nums[i]>nums[i-1])
            {
                break;
            }
        }
        return i;
        
    }
};