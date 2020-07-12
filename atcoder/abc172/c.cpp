#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int k;
    cin >>k;
    vector<int>a(n+m);
    for(int i = 0;i <n+m;i++) cin >> a[i];
    
    sort(begin(a),end(a));
    int i = 0;
    while(i < (n+m) && a[i] <=k){
        k-=a[i];
        i++;
    }
    cout << i;

}
