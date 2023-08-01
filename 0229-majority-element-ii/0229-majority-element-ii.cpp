class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int l=nums.size();
        if(l==1)
            return nums;

        vector<int>res;
        unordered_map<int,int>ump;
        for(int i=0; i<l; i++)
            ump[nums[i]]++;

        for(auto x : ump){
            if(x.second > (l/3))
                res.push_back(x.first);
        }

        return res;
    }
};