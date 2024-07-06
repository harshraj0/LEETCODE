class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     vector<int>a;
     int count=0;
     int flag=0,b;
    if(nums.empty()){
        flag=2;
        a.push_back(-1);
        a.push_back(-1);
    
    }
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==target)
        {
            flag=1;
            count++;
            b=i;
        }

        
    }
    if(flag==1){
        a.push_back(b-count+1);
        a.push_back(b);
    }
    else if(flag==0)
        {
            a.push_back(-1);
            a.push_back(-1);
        }
    return a;
    }
};