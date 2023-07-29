class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=nums.size();
        int mx=0,count=0;
        for(int i=0; i<l; i++){
            if(nums[i]==1){
                count++;
            }
            else{
                count=0;
            }
            mx=max(mx, count);
        }
        return mx;
    }
};