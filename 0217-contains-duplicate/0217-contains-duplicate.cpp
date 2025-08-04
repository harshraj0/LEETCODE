class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_map<int,int> container;
    for(int num:nums){
        if(container.find(num) != container.end()) return true;
        container[num];
    }
    return false;
    }
};