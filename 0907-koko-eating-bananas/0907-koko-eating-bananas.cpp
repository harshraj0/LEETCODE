class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        long long st=1,end=0,n=piles.size(),count,ans;
        double mid;
        for(int i=0;i<n;i++)
        {
            end+=piles[i];
        }

        while(st<=end)
        {
            mid=st+(end-st)/2;
            count=0;
            for(int i=0;i<n;i++)
            {
                count+=ceil(piles[i]/mid);
            }
            if(count<=h){
            ans=mid;
            end=mid-1;
            }
            else{
                
                st=mid+1;
            }
        }
        return ans;
        
    }
};