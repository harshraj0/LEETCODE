class Solution {
public:
    void nextPermutation(std::vector<int>& nums) {
    int temp = 0, i = 0, n = nums.size();
    int flag = 0;
    int a = n - 1;
    for (i = n - 1; i > 0; i--) {
        if (nums[i] > nums[i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        int j = n - 1;
        while (nums[j] <= nums[i - 1]) {
            j--;
        }
        
        swap(nums[i - 1], nums[j]);
    }
     
   reverse(nums.begin() + i, nums.end());
}
};