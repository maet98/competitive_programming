#include<bits/stdc++.h>
#define ii pair<int,int>

using namespace std;

int cam(int a, int b,int c, int x,int y){
    int val = a*x+b*y+c;
    if(val == 0){
        return 0;
    }
    else if( val > 0){
        return 1;
    }
    else{
        return -1;
    }
}


int main(){
    ii a;
    ii b;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    int ans = 0;
    int n;
    cin >> n;
    for(int i =0;i <n;i++){
        int x[3];
        cin >> x[0] >> x[1] >> x[2];
        if(cam(x[0],x[1],x[2],a.first,a.second) != cam(x[0],x[1],x[2],b.first,b.second)){
            ans++;
        }
    }
    cout << ans;
}
