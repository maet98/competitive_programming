#include<bits/stdc++.h>

using namespace std;
int n,k;
vector<int>a;

int memo[10001][101];

bool dp(int id,int m){
    if(id == n){
        return (m == 0);
    }

    if(memo[id][m] != -1) return memo[id][m];

    bool ans = false;
    if(dp(id+1,((a[id]+m)+k)%k)) ans = true;
    if(dp(id+1,((m-a[id])+k)%k)) ans = true;

    return memo[id][m] = ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        a.resize(n);
        for(int i= 0;i<n;i++){
            cin >> a[i];
        }
        for(int i= 0;i < n;i++){
            for(int j = 0;j < k;j++){
                memo[i][j] = -1;
            }
        }
        cout << (dp(1,a[0]%k)? "Divisible": "Not divisible") << endl;
    }
}
