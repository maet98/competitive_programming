#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>a(m);
    for(int&i:a) cin >> i;
    sort(a.begin(),a.end());

    int ans = 0;
    for(int i = 0;i <n;i++){
       int ac = lower_bound(a.begin(),a.end(),i) - a.begin();
       if(ac > 0){
           ans = max(ans,min(a[ac]-i,i-a[ac-1]));
       }
       else{
           ans = max(ans,a[ac]-i);
       }
    }
    cout << ans << endl;
}
