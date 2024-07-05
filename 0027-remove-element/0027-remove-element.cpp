class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(val==nums[i])
            {
            
                k++;
            }
            else{
                nums[i-k]=nums[i];

            }
            
        
            
        }
        return n-k;
        
    }
};