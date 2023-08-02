class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int l=graph.size();
        vector<vector<int>>adjrev(l);
        vector<int>indeg(l), res;
        queue<int>q;

        for(int i=0; i<l; i++){
            for(auto j : graph[i]){
                adjrev[j].push_back(i);
                indeg[i]++;
            }
        }
        for(int i=0; i<l; i++){
            if(indeg[i]==0)
                q.push(i);
        }

        while(!q.empty()){
            int node=q.front();
            q.pop();

            res.push_back(node);

            for (auto it : adjrev[node]) {
				indeg[it]--;
				if (indeg[it] == 0)
                    q.push(it);
			}
        }
        sort(res.begin(), res.end());
        return res;
    }
};