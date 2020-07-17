#include<bits/stdc++.h>
#define ii pair<int,int>

using namespace std;
int n;
vector<ii>a;

int main(){
    ii start;
    cin >> start.first >> start.second;
    cin >> n;
    for(ii&i:a) cin >> i.first >> i.second;
    int mask = 1<<n;
    cout << dp(mask);
}
