class Solution {
public:
    int findGCD(vector<int>& nums) {
        int a=INT_MAX,b=INT_MIN;
        for(int i: nums)
        {
            if(i<a) a=i;
            if(i>b) b=i;
        }
        int g=1;
        for(int i=a;i>=2;i--)
        {
            if(b%i==0 && a%i ==0)
            {
                g=i;
                break;
            }
        }
        return g;

        
    }
};