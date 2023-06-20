class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0, white=0, blue=0;
        int l=nums.size();

        for(int i=0; i<l; i++){
            if(nums[i]==0)
                red++;
            if(nums[i]==1)
                white++;
            else
                blue++;
        }
        for(int i=0; i<l; i++){
            if(red){
                nums[i]=0;
                red--;
            }
            else if(white){
                nums[i]=1;
                white--;
            }
            else{
                nums[i]=2;
                blue--;
            }
        }
    }
};