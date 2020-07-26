#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int>a(n),b(m);
        for(int&i:a) cin >>i;
        for(int&i:b) cin >> i;
        int ans = -1;
        for(int i = 0;i <n && ans == -1;i++){
            for(int j = 0;j < m && ans == -1;j++){
                if(a[i] == b[j]){
                    ans = a[i];
                }
            }
        }
        if(ans == -1){
            cout << "NO";
        }
        else{
            cout << "YES" << endl;
            cout << 1 <<  ' ' << ans;
        }
        cout << endl;
    }
}


