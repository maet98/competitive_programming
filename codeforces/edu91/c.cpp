#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int>a(n);
        for(int&i:a) cin >> i;
        sort(begin(a),end(a));

        int ans = 0;
        int j = n-1;
        int cont = 0;
        int mn = 1e9;
        while(j >= 0){
            mn = min(mn,a[j]);
            cont++;
            if(mn*cont >= x){
                ans++;
                cont = 0;
                mn = 1e9;
            }
            j--;
        }
        cout << ans << endl;
    }
}

