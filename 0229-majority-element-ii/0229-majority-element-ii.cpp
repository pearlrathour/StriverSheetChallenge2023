class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int l=nums.size();
        if(l==1)
            return nums;

        vector<int>res;
        unordered_map<int,int>ump;
        int n=(l/3)+1;
        for(int i=0; i<l; i++){
            ump[nums[i]]++;

            if(ump[nums[i]] == n)
                res.push_back(nums[i]);

            if(res.size()==2)
                return res;
        }
        return res;
    }
};