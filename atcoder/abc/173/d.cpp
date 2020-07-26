#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int>a(n);
    ll sum = 0;
    for(int i = 0;i <n;i++){
        cin >> a[i];
    }
    sort(begin(a),end(a));
    for(int i = 0;i < n-1;i++){
        sum += min(a[i+1],a[(i-1)+n%n]);
    }
    cout << sum << endl;
}
