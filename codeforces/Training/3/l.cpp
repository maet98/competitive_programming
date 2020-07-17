#include<bits/stdc++.h>
#define ii pair<int,int>
#define ll long long

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<ll>a(n);
    vector<ii>b(n);
    for(int i = 0;i <n;i++){
        cin >> a[i];
        b[i] = ii(a[i],i);
    }
    sort(begin(b),end(b));
    int j = n-1;
    ii x = ii(0,1);
    while(j >=0){
        if(b[j].first != a[j]){
            x = ii(b[j].second,j);
            break;
        }
        j--;
    }
    ll ans = 0;
    cout << x.first << ' ' << x.second << endl;
    for(int i = 0;i <n;i++){
        if(i >= x.first && i < x.second){
            ans += (i+1)*a[i+1];
        }
        else if(i == x.second){
            ans += (i+1)*a[x.first];
        }
        else{
            ans += (i+1)*a[i];
        }
        cout << ans << endl;
    }
    cout << ans;
}


