class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int mcount=0,i=1,j=0;
        while(mcount<k)
        {
            if(j<arr.size())
            {
            if(arr[j]==i)
            {
                i++;
                j++;
            }
            else{
                i++;
                mcount++;
            }
            }

            else{
                i++;
                mcount++;
            }
            
        }
        return i-1;
        
    }
};