#include <bits/stdc++.h>
#define ll long long

using namespace std;
vector<ll>fib;

void genFib(ll n){
    ll uno = 1;
    ll dos = 1; 
    fib.push_back(1);
    fib.push_back(1);
    for(int i = 0;i < 80;i++){
        fib.push_back(uno+dos);    
        ll temp = dos;
        dos +=uno;
        uno = temp;
        cout << fib.back() << endl;
    }
}
int n = 80;

int dp(ll sum,int i){
    if(i == n){
        return (sum == 0? 0: 1e9);
    }
    int ans = 1e9;
    if(sum >= fib[i]){
        ans = min(ans, 1+ dp(sum-fib[i],i+1));    
    }
    ans = min(ans,dp(sum,i+1));
    return ans;
}

int main(){
    genFib(1);
    while(1){
        int x;
        cin >> x;
        cout << dp(x,0) << endl;
    }

}
