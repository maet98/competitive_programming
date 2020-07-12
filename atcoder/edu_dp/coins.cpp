#include<bits/stdc++.h>

using namespace std;
int n;
vector<double>a;
double memo[3000][3000];

double dp(int id,int m){
    if(id == n){
        return (m >= (n/2 + n%2));
    }
    if(memo[id][m] != -1) return memo[id][m];
    return memo[id][m] = ((dp(id+1,m+1)*a[id]) + (dp(id+1,m)*(1-a[id])));
}

int main(){
    cin >> n;
    for(int i = 0;i <n;i++){
        for(int j = 0;j < n;j++){
            memo[i][j] = -1;
        }
    }
    a.resize(n);
    for(auto&i:a) cin >> i;
    cout << dp(0,0) << endl;
}
