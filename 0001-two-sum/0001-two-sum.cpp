class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        for(i=0;i<nums.size();i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if(i==j)
                continue;
                else if(nums[j]==target-nums[i])
                return {i,j};
            }
            
            
        }
        return {};

        
    }
};