#include<bits/stdc++.h>
#define ld long double

using namespace std;

const long double pi = 3.141592653589793;

int main(){
    long double a;
    while(cin >> a){
        ld res = (a/2)-(a/3);
        ld x = res * (a/2);
        x += (pi * (a/3) * (a/3))/4;
        x*=4;
        printf("%.4Lf\n",(a*a-x));
    }
}
