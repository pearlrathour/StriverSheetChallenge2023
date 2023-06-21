class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int idx;
        for(auto i : nums){
            idx=abs(i);
            if(nums[idx]<0)
                return idx;
            nums[idx] = -nums[idx];  
        }
        return nums.size();
    }
};