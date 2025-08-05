class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        int a=-1,b=-1;
        int i=-1,j=end;
        int count=0,flag=0,flag1=0;
        while(start<=end)
        {
            int mid =start+(end-start)/2;
            if(nums[mid]==target)
            {
                i++;
                if(nums[i]==target && flag==0)
                {
                    flag=1;
                    a=i;
                    count++;
                }
                if(nums[j]==target && flag1==0)
                {
                    flag1=1;
                    b=j;
                    count++;
                }
                j--;

                
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else start=mid+1;
            if(count==2) break;
        }
       
        return {a,b};
        
    }

    
};