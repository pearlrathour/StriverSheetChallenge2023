class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(), nums.end());
        int l=nums.size(), low, high, sum;
        
        for(int i=0; i<l-2; i++){
            if(i==0 || (nums[i]!=nums[i-1])){
                low=i+1;
                high=l-1;
                sum=-nums[i];

                while(low < high){
                    if(nums[low]+nums[high] == sum){
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        res.push_back(temp);

                        while(low<high && nums[low] == nums[low+1])
                            low++;
                        while (low<high && nums[high] == nums[high-1])
                            high--;
                        
                        low++; 
                        high--;
                    }
                    
                    else if(nums[low]+nums[high] < sum)
                        low++;
                    else
                        high--;
                }
            }
        }
        return res;
    }
};