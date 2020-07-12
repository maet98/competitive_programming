#include<bits/stdc++.h>

using namespace std;;
int n;
int k;
vector<int>a;
int memo[100001];

int dp(int i){
    if(i == n-1){
        return 0;
    }
    if(memo[i] !=-1) return memo[i];
    int ans = 1e9;
    int j = 1;
    while(j <= k && i < n-j){
        ans = min(ans,dp(i+j)+abs(a[i]-a[i+j]));
        j++;
    }
    return memo[i] = ans;
}


int main(){
    memset(memo,-1,sizeof(memo));
    cin >> n >> k;
    a.resize(n);
    for(int&i: a) cin >> i;
    cout << dp(0);

}
