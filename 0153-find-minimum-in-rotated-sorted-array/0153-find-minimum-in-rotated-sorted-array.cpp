class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int n=j;
        while(i<=j)
        {
            if(nums[0]<=nums[n])
                return nums[0];
            else if(nums[n]<nums[(n-1)%n])
            return nums[j];
            else
            i++;j--;
            if(nums[i]<nums[i-1] &&nums[i]<nums[(i+1)%n])
            return nums[i];
            else if(nums[j]<nums[j+1] && nums[j]<nums[(j-1)%n])
            return nums[j];
            
        }
        return 0;
        }


    
};