class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        for(int i=1;i<n;i++)
        {
            left[i] = left[i-1] + nums[i-1];

        }
        for(int j=n-2;j>=0;j--)
        {
            
            right[j]=right[j+1]+nums[j+1];
        }
        for(int i=0;i<n;i++)
        {
            nums[i]= abs(left[i]-right[i]);
        }
        return nums;
        
    }
};