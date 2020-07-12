#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        vector<int>a(n);
        for(int&i:a) cin >> i;
        sort(begin(a),end(a));
        reverse(begin(a),end(a));
        int ans = 0;
        long long sum = 0;
        while(ans < n && (ans+1)*k <= (sum+a[ans])){
            sum+=a[ans];
            ans++;
        }
        cout << ans;
    }
}

