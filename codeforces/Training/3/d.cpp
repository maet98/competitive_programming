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
    int ans = 0;
    int j = n-1;
    for(int i = 0;i <n;i++){
        if(a[i] >=k){
            ans += j;
            j--;
        }
    }
    cout << ans;
}
