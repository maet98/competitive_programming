#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long x1,x2,y1,y2,r1,r2;
        cin >> x1 >> y1 >> x2 >> y2 >> r1 >> r2;
        long long dx = x2-x1;
        long long dy = y2-y1;
        long double dist = sqrt(dx*dx + dy*dy);
        if(dist <= (r1+r2)){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        cout << endl;
    }
} 
