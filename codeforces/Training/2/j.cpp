#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll suma(ll n ){
    return n*(n-1)/2 + 1;
}

int main(){
    ll n;
    int k;
    cin >> n >> k;
    ll mx = suma(k);
    if(mx < n){
        cout << -1;
    }
    else{
        int l = 1;
        int r = k;
        int ans = k-1;
        ll val = suma(k);
        while(l <= r){
            int mid = (l+r)/2;
            ll x = suma(mid-1);
            x = val - x;
            cout << x << ' ' << mid << endl;
            if(n-x > 0 ){
                if(n-x < mid){
                    ans = min(ans,k-mid + 1);
                }
                r = mid - 1;
            }
            else if(n-x == 0){
                cout << "hihi";
                ans = k-mid + 1;
                break;
            }
            else{
                l = mid + 1;
            }
        }
        cout << ans;
    }
}
