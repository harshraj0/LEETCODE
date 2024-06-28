class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i,j;
        int maxi=nums[0],sum=0;
        for(i=0;i<nums.size();i++)
        {
            
                sum+=nums[i];
                maxi=max(sum,maxi);
            if(sum<0)
            sum=0;
            
        }
        return maxi;
        
    }
};