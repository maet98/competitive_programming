#include<bits/stdc++.h>

using namespace std;

int dist(int x[], int val){
    int sum = 0;
    for(int i = 0;i <3;i++){
        sum += abs(val-x[i]);
    }
    return sum;
}

int main(){
    int x[3];
    cin >> x[0] >> x[1] >> x[2];
    int mn = 1e9;
    for(int i = 1;i <= 100;i++){
        mn = min(mn,dist(x,i));
    }
    cout << mn << endl;
}
