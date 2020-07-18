#include<bits/stdc++.h>
#define ii pair<int,int>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int i = 0;i <n;i++){
       int x,y;
       cin >> x >> y;
       x--;
       y--;
       a[x]++;
       a[y]++;
    }
    long long ans = 0;
    sort(begin(a),end(a));
    int j = n;
    for(int i = 0;i <n;i++){
        while(i < j && a[i]+a[j]>=k) j--;
        ans += (n-j);
    }
    cout << ans;
}
