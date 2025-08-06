class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int start = 0;
        int end = arr.length - 1;

        while(start <= end) {
            int mid = (start + end) / 2;
            
                if(mid - 1 >= 0 && mid + 1 < arr.length && arr[mid - 1] < arr      [mid] && arr[mid] > arr[mid + 1]) {
                    return mid;
                }
            
                else if(mid - 1 < 0 || arr[mid] > arr[mid - 1]) {
                    start = mid + 1;
                }

                else if(mid + 1 >= arr.length || arr[mid + 1] < arr[mid]) {
                    end = mid - 1;
                }
            }
        
        return 0;
    }
}