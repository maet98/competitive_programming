#include<bits/stdc++.h>

using namespace std;

int n;
vector<int>a[3];
int memo[100001][5];

int dp(int i,int j){
    if(i == n){
        return 0;
    }
    if(memo[i][j] != -1) return memo[i][j];
    int ans = 0;
    for(int k = 0;k < 3;k++){
        if(k == j) continue;
        ans = max(ans,a[k][i]+dp(i+1,k));
    }
    return memo[i][j] = ans;
}

int main(){
    memset(memo,-1,sizeof(memo));
    cin >> n;
    for(int i = 0;i <3;i++){
        a[i].resize(n);
    }
    for(int i = 0;i <n;i++){
        cin >> a[0][i] >> a[1][i] >> a[2][i];
    }
    cout << dp(0,4) << endl;
}
