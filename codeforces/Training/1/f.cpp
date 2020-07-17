#include<bits/stdc++.h>
#define MOD 1000000007

using namespace std;

int memo[2001][2001];

int n,k;
int dp(int id,int ant){
    if(id == k){
        return 1;
    }
    if(memo[id][ant] != -1) return memo[id][ant];

    long long ans = 0;
    int i = 1;
    while(ant*i <= n){
        ans += dp(id+1,ant*i)%MOD;
        i++;
    }
    return memo[id][ant] = ans%MOD;
}

int main(){
    memset(memo,-1,sizeof(memo));
    cin >> n >> k;
    cout << dp(0,1) %MOD;
}
