#include <bits/stdc++.h>

using namespace std;

int binpow(int b, int e, int m){
    if(e == 0) return 1;
    int x = binpow(b,e/2,m)%m;
    if(e&1)return (x*x*b)%m;
    return (x*x)%m;

}

int main(){
    int b,p,m;
    while(cin >> b){
        cin >> p >> m;
        cout << binpow(b,p,m);
    }
}
