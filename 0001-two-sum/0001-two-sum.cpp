class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        unordered_map<int,int>ump;
        int l=nums.size();
        for(int i=0; i<l; i++){
            if(ump.find(target-nums[i]) != ump.end()){
                res.push_back(ump[target-nums[i]]);
                res.push_back(i);
                break;
            }
            else
                ump[nums[i]]=i;
        }
        return res;
    }
};