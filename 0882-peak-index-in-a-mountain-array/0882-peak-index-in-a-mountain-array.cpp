class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0,end=arr.size()-1;
        int mid=0;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(mid!=0 && mid!=arr.size()-1)
            {

            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
            {
                return mid;
            }
            else if(arr[mid]<arr[mid-1])
            end=mid-1;
            else if(arr[mid]>arr[mid-1])
            start=mid+1;
            }
            // if (mid==start)
            // return mid;
            // else if(mid==end)
            // return mid;
            if(mid==0)
            return mid+1;
            else if(mid==end)
            return mid-1;

        }
        return 0;
    }
};