class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count;
        vector<int>a;
        for(int i=0;i<nums.size();i++)
        {
            if(find(nums.begin(), nums.begin()+i, nums[i]) != nums.begin() + i)
            {
                continue;
            }
            count=0;
            for(int j=i;j<nums.size();j++)
            {
                if(find(a.begin(), a.end(), nums[i]) != a.end())
                {
                    continue;
                }
                else if(nums[j]==nums[i])
                {
                    count++;
                }
                if(count>(nums.size())/3)
                {
                 a.push_back(nums[i]);   
                }
            }
        }
        return a;
        
    } 
};