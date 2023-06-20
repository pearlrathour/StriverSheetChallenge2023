class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        // next_permutation(nums.begin(), nums.begin()+n);
        
        //Break point
        int ind=-1;
        for(int i=n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                ind=i;
                break;
            }
        }
        if(ind==-1)
            sort(nums.begin(), nums.end());
        
        else{
            //Placing at ind-> element closest to nums[ind] and greater 
            int a=nums[ind], j, d=INT_MAX;
            for(int i=ind+1; i<n; i++){
                if(nums[i]>a && abs(nums[i]-a) < d){
                    d=abs(nums[i]-a);
                    j=i;
                }
            }
            swap(nums[ind], nums[j]);

            //Placing remaining elements in sorted order
            sort(nums.begin()+ind+1, nums.end());
        }
    }
};