#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

vector<int>a;
int n;
int memo[1000001][3];

int dp(int id,int ant){
    if(id == n){
        return (ant != 2);
    }
    if(memo[id][ant]!= -1) return memo[id][ant];
    int ans = 0;

    if(ant == 2){
        ans = dp(id+1,a[id])%MOD;
    }
    else if(ant == !a[id]){
        ans = dp(id+1,a[id])%MOD;
    }
    ans += dp(id+1,ant)%MOD;
    return memo[id][ant] = ans %MOD;
}

int main(){
    memset(memo,-1,sizeof(memo));
    cin >> n;
    bool c = true;
    for(int i = 0;i <n;i++){
        a.push_back(c);
        c = !c;
    }
    cout << dp(0,2);
}
