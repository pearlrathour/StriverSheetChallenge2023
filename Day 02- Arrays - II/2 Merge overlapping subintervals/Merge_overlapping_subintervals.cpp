class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intrv) {
        int n= intrv.size();
        if(n==1)
            return intrv;

        sort(intrv.begin(), intrv.end());
        vector<vector<int>>ans;
        int l=intrv[0][0], r=intrv[0][1];

        for(int i=1; i<n; i++){
            
            if(intrv[i][0] >= l && intrv[i][0] <= r){
                if(intrv[i][1] >= r)
                    r=intrv[i][1];
            }
            else{
                vector<int>a={l,r};
                ans.push_back(a);
                l=intrv[i][0];
                r=intrv[i][1];
            }
        }
        vector<int>a={l,r};
        ans.push_back(a);
        return ans;
    }
};