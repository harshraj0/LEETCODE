class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i=0,j=0,n=nums.size();
        vector<int> p(n,1);
        int pr=1;
        for(int i=0;i<n-1;i++)
        {
            pr*=nums[i];
            p[i+1]=pr;
        }
        pr=1;
        for(int i=n-1;i>0;i--)
        {
            pr*=nums[i];
            p[i-1]*=pr;
        }


        return p;  
    }
};