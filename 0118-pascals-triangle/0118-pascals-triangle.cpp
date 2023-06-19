class Solution {
public:
    void helper(int n, vector<vector<int>>&res,vector<int>&r){
        if(n==1){
            res.push_back(r);
            return;
        }
        helper(n-1, res, r);
        vector<int>b(n);
        b[0]=1;
        for(int i=1; i<n-1; i++){
            b[i]=res[n-2][i] + res[n-2][i-1];
        }
        b[n-1]=1;
        res.push_back(b);
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>>res;
        vector<int>r={1};
        helper(n, res, r);
        return res;
    }
};