#include <bits/stdc++.h>

using namespace std;
int n;
vector<int>a(10);
int dp(int id,vector<int>a){
    if(id == n){
        return 1;
    }

int main(){
    cin >> n;
    for(int i = 0;i <10;i++) cin >> a[i];
    cout << dp(0,);
}
