class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s=nums.size();
        if(s==1)
            return 1;
        int l=1;
        for(int i=0 ; i<s-1; i++)
            if(nums[i]!=nums[i+1]){
                nums[l]=nums[i+1];
                l++;
            }
        return l;
    }
};