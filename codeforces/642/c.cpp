#include<bits/stdc++.h>

using namespace std;

int main(){
    int n = 500000;
    vector<long long>a(n);
    a[0] = 0;
    for(long long i = 1;i < n;i++){
        a[i] = 8LL*i*i+a[i-1];
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        cout << a[n/2] << endl;
    }
}

