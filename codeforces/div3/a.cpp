#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;cin >>t;
    while(t--){
        vector<int>a(3);
        for(int&i:a) cin >> i;
        sort(begin(a),end(a));
        if(a[2]!= a[1]){
            cout << "NO";
        }
        else{
            cout << "YES" << endl;
            cout << a[2] << ' ' << a[0] << ' ' << a[0];
        }
        cout << endl;
    }
}
