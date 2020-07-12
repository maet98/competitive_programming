#include <bits/stdc++.h>

#define ii pair<int,int>
#define ll long long

using namespace std;

struct mov{
    ii pos;
    ii mov;
};

int main(){
    int n,k;
    cin >> n >> k;
    ii source;
    cin >> source.first >> source.second;
    set<ii>ob;
    for(int i = 0;i < k;i++){
        ii ac;
        cin >> ac.first >> ac.second;
        ob.insert(ac);
    }
    vector<ii>po = {ii(1,0),ii(-1,0),ii(1,1),ii(-1,-1),ii(0,1),ii(0,-1),ii(1,-1),ii(-1,1)};
    queue<mov>qu;
    for(ii ac: po){
        mov x;
        x.pos = source;
        x.mov = ac;
        qu.push(x);
    }
    int ans = 0;
    while(!qu.empty()){
        auto ac = qu.front();
        qu.pop();
        ac.pos.first += ac.mov.first;
        ac.pos.second += ac.mov.second;
        if(ac.pos.first > 0 && ac.pos.first <= n && ac.pos.second > 0 && ac.pos.second <= n){
            if(!ob.count(ac.pos)){
                qu.push(ac);
                ans++;
                ob.insert(ac.pos);
            }
        }
    }
    cout << ans << endl;
}
