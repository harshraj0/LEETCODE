class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>a;
        int first=-1,last=-1,start=0,end=nums.size()-1,mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else if(nums[mid]<target)
            start=mid+1;
        }

        a.push_back(first);
        start=0,end=nums.size()-1;
         while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                //first=mid;
                 last=mid;
                //end=mid-1;
                 start=mid+1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else if(nums[mid]<target)
            start=mid+1;
        }
        a.push_back(last);
        return a;
    }
    
};