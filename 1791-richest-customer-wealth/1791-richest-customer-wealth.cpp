class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=INT_MIN;
        int sum=0;

        for(const auto& account : accounts)
        {
            sum=0;
            for(int money: account)
            {
                sum=sum+money;
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};