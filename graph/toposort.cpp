#include<bits/stdc++.h>

using namespace std;

vector<bool>visited;
vector<vector<int>>adj;
vector<int>ans;

void dfs(int v){
    visited[v] = true;
    for(int& u:adj[v]){
        if(!visited[u]){
            dfs(u);
        }
    }
    ans.push_back(v);
}

vector<int> toposort(int n, vector<vector<int>>graph) {
    visited.assign(n,false);
    ans.clear();
    adj = graph;
    for(int i = 0;i <n;i++){
        if(!visited[i]) dfs(i);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
