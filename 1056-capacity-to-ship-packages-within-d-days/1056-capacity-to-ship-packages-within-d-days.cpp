class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=0,end=0,mid=0,ans=0,n=weights.size(),i=0,weight=0,count=0;
        for(i=0;i<n;i++)
        {
            end+=weights[i];
            start=max(start,weights[i]);
        }
        if(days>n)
        return end;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            count=1;
            weight=0;
            for(i=0;i<n;i++)
            {
                weight+=weights[i];
                if(weight>mid)
                {
                    count++;
                    weight=weights[i];
                }
            }
            if(count<=days)
            {
                ans=mid;
                end=mid-1;

            }
            else
            start=mid+1;
        }
        return ans;       
    }
};