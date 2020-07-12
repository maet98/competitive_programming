/*
 * 2
 * 7
 * 16
 * (n*(n+1)) + n*(n-1)/2
 * */
#include<bits/stdc++.h>

using namespace std;

long long value(long long n){
    return n*(n+1) + (n*(n-1)/2);
}

int main(){
    int t;
    cin >> t;
    vector<int>a;
    int i = 0;
    while(1){
        int v = value(i);
        if(v > 1e9) break;
        a.push_back(v);
        i++;
    }
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        while(n > 1){
            int x = lower_bound(begin(a),end(a),n) - begin(a);
            if(a[x] == n){
                ans++;
                break;
            }
            else if(x > 0){
                n-=a[x-1];
                ans++;
            }
            else{
                break;
            }
        }
        cout << ans << endl;
    }
}
