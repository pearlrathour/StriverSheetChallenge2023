class Solution {
public:
    bool check(vector<vector<int>>& graph, vector<int>&clr, int start){
        queue<int>q;
        q.push(start);
        int c=0;
        clr[start]=c;

        while(!q.empty()){
            int node=q.front();
            q.pop();

            for(auto i : graph[node]){
                if(clr[i]==-1){
                    clr[i]=!clr[node];
                    q.push(i);
                }
                else if(clr[i]==clr[node])
                    return 0;
            }
        }
        return 1;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<int>clr(v,-1);
        
        for(int i=0; i<v; i++){
            if(clr[i]==-1){
                if(check(graph,clr,i)==0)
                    return 0;
            }
        }
        return 1;
    }
};