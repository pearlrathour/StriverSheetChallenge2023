class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int l=nums.size();
        sort(nums.begin(), nums.end());
        return nums[l/2];
    }
};