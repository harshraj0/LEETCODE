class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int i=0,n=nums.size();
        vector<int> left(n,0);
        int a=0;
        vector<int> right(n,0);
        int b=0;
        left.push_back(0);
        for(i=1;i<n;i++)
        {
            left[i] = left[i-1] + nums[i-1];

        }
        for(int j=n-2;j>=0;j--)
        {
            
            right[j]=right[j+1]+nums[j+1];
        }
     //   reverse(right.begin(),right.end());
        for(i=0;i<n;i++)
        {
            int d =left[i]-right[i];
            nums[i]= abs(d);
        }
        return nums;
        
    }
};