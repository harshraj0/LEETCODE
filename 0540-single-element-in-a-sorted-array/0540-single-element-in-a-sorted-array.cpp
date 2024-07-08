class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0;
        int x=nums[0];
        while(i<nums.size()-1)
        {
            x=nums[i]^nums[i+1];
            if(x!=0)
            break;
            i=i+2;
        }
        return nums[i];      
    }
};