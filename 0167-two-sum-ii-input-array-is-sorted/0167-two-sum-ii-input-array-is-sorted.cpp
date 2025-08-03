class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        for(int i=0;i<n-1;i++)
        {
            int rem=target-numbers[i];
            int start=i+1,end=n-1;
            while(start<=end)
            {
                int mid=start+ ((end-start)/2);
                if(rem==numbers[mid]){
                   return {i+1,mid+1};
                }
                else if(rem>numbers[mid])
                {
                    start=mid+1;
                }
                else
                end=mid-1;

            }
        }
        return {} ;
    }
};