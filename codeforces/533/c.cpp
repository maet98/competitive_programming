#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;
int n;
vector<int>a(3,0);
int dp(int id,int m){
    if(id == n){
        return (m == 0);
    }
    long long ans = 0;
    for(int i = 0;i < 3;i++){
        ans += (a[i]%mod*dp(id+1,(m+i)%3)%mod)%mod;
        ans %=mod;
    }
    return ans;
}

int main(){
    int l,r;
    cin >> n >> l >> r;
    l--;
    for(int i =0;i <3;i++){
        int x = l/3;
        if(i > 0 && l%3>=i) x++;
        int y = r/3;
        if(i > 0 && r%3>=i) y++;
        cout << x << ' ' << y << endl;
        a[i] = y-x;
    }
    cout << dp(0,0) << endl;
    
}
