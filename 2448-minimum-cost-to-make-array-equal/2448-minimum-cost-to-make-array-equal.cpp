class Solution {
public:
    long helper(vector<int>& nums, vector<int>& cost, int val) {
        long ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            ans += 1l * abs(nums[i] - val) * cost[i];
        }
        return ans;
    }
    
    long long minCost(vector<int>& nums, vector<int>& cost) {
        int a= nums[0], b= nums[0];
        for (int i : nums) {
            a= min(a, i);
            b= max(b, i);
        }

        long ans= 0;

        while (a < b) {
            int mid = (b-a)/2 + a;
            long cost1 = helper(nums, cost, mid);
            long cost2 = helper(nums, cost, mid + 1);
            if (cost1 > cost2) {
                a = mid + 1;
                ans = cost2;
            }
            else {
                b = mid;
                ans = cost1;
            }
        }
        return ans;
    }
};