#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        if( n > m) swap(n,m);
        if(n >=2 && m >=3){
            cout << "NO";
        }
        else{
            cout << "YES";
        }
        cout << endl;
    }
}
