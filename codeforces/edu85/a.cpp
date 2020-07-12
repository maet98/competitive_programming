#include<bits/stdc++.h>
#define ii pair<int,int>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ii>a(n);
        for(ii &i:a) cin >> i.first >> i.second;
        bool c = true;
        for(ii&i:a){
            if(i.first < i.second){
                c = false;
                break;
            }
        }
        for(int i = 1;i < n;i++){
            if((a[i].first < a[i-1].first) || (a[i].second < a[i-1].second)){
                c = false;
                break;
            }
            if((a[i].first - a[i-1].first) < (a[i].second - a[i].second)){
                c = false;
                break;
            }
        }
        cout << ((c)? "YES": "NO") << endl;
    }
}
