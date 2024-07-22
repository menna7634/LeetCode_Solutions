class Solution {
public:
    vector<int> topoSort(int k, vector<vector<int>>& Conditions) {
        vector<int> in_degree(k+1, 0);
        vector<vector<int>> adj(k+1);
        for(auto Cond : Conditions) {
            adj[Cond[0]].push_back(Cond[1]);
            in_degree[Cond[1]]++;
        }
        queue<int> q;
        for(int i= 1; i <= k; i++) {
            if(in_degree[i] == 0) {
                q.push(i);
            }
        }
        vector<int> ans;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(int it : adj[node]) {
                in_degree[it]--;
                if(in_degree[it] == 0) {
                    q.push(it);
                }
            }
        }
        for(int i = 1; i <= k; i++) {
            if(in_degree[i] != 0) {
                return {};
            }
        }
        return ans;
    }
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<int> row = topoSort(k, rowConditions);
        vector<int> col = topoSort(k, colConditions);
        if(row.empty() || col.empty()) {
            return {};
        }
        vector<vector<int>> res(k, vector<int>(k,0));
        for(int i = 0; i < k; i++) {
            int rowNum = row[i];
            for(int j = 0; j < k; j++) {
                if(col[j] == rowNum) {
                    res[i][j] = rowNum;
                }
            }
        }
        return res; 
    }
};