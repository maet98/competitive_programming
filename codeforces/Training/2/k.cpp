#include<bits/stdc++.h>
#define ll long long
#define ii pair<ll,ll>

using namespace std;


int main(){
    ii a;
    ii b;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    int ans = 0;
    int n;
    cin >> n;
    for(int i =0;i <n;i++){
        ll x[3];
        cin >> x[0] >> x[1] >> x[2];
        ll l1 = x[0]*a.first + x[1]*a.second + x[2];
        ll l2 = x[0]*b.first + x[1]*b.second + x[2];
        if((l1 > 0 && l2 < 0)||(l1 < 0 && l2 > 0)){
            ans++;
        }
    }
    cout << ans;
}
