class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=nums.size();
        for(int i=1; i<l; i++){
            nums[i]+=nums[i-1];
        }
        if(nums[l-1] < target)
            return 0;
        
        int minl=l,i=0,j=0,sum=0;
        while(i<l && j<l){
            while(nums[j]-sum >= target){
                minl=min(minl,j-i+1);
                sum=nums[i];
                i++;
            }
            j++;
        }
        return minl;
    }
};