class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        if(nums.empty())return 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0 || nums[i]%3==0)
            continue;
            else
            count++;
        }
        return count;
    }
};