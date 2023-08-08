class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int low=0, high=n-1, mid;
        
        while(low<=high){
            mid=(high-low)/2 + low;
            
            if(nums[mid]==target)
                return mid;
            else if(nums[low]<=nums[mid]){
                if(nums[low]<=target && nums[mid]>=target)
                    high=mid-1;
                else
                    low=mid+1;
            }
            else{
                if(nums[mid]<=target && nums[high]>=target)
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
        return -1;
    }
};