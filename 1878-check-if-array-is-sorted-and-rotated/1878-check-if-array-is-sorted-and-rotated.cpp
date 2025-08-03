class Solution {
public:
    bool check(vector<int>& nums) {
        int i=0,flag=0;
       while(i<nums.size()-1)
       {
        if(nums[i]>nums[i+1])
        {
            flag++;
            if(flag>1)
            return false;
        }
        if(flag==1 && nums[nums.size()-1]>nums[0])
       return false;
        i++;


       }
       
    
       
       return true;
       
        
    }
};