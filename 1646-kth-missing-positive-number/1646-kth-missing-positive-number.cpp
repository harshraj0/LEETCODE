class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i =1, m=1;
        int j=0;
        while(i<=k)
        {   if(j<arr.size())
            {
            if(arr[j]==m)
            {
                j++;
                m++;
            }
            else
            {
                m++;
                i++;
            }
            }
            else
            {
                m++;
                i++;
            }
            
        }
        return m-1;
    }
};