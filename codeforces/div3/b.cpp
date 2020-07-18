#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n*2);
        for(int&i:a) cin >> i;
        set<int>s;
        vector<int>ans;
        for(int i = 0;i<2*n;i++){
            if(!s.count(a[i])){
                s.insert(a[i]);
                ans.push_back(a[i]);
            }
        }
        for(int &i:ans) cout << i << ' ';
        cout << endl;
    }
}
