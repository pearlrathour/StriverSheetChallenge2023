class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l=nums.size();
        int maxsum=INT_MIN, sum=0;
        for(int i=0; i<l; i++){
            sum+=nums[i];
            maxsum=max(maxsum,sum);
            if(sum<0)
                sum=0;
        }
        return maxsum;
    }
};