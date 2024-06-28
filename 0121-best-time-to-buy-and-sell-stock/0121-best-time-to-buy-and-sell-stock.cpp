class Solution {
    
public:
    int maxProfit(vector<int>& prices) {
        int i,j,maxi=INT_MIN;
        int b;
        int prof;
        b=prices[0];
        for(i=1;i<prices.size();i++)
        {
            prof=prices[i]-b;
            maxi=max(maxi,prof);
            b=min(b,prices[i]);


        }
        if(maxi<0)
        maxi=0;
        return maxi;
        
    }
};