#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin >> a;
    int b = stoi(a.substr(0,2));
    int c = stoi(a.substr(3,2));
    if(b >= 12){
        b-=12;
    }
    float ans1 = (b/12.0)*360 + c/2.0;

    cout << ans1 << ' ' << c/60.0 * 360 << endl;
}
