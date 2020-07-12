#include<bits/stdc++.h>

using namespace std;

int main(){
    long long x;
    cin >> x;
    long long c = 1;
    vector<int>a(10,1);
    int i = 0;
    while(c < x){
        c/=a[i];
        a[i]++;
        c*=a[i];
        i++;
        i%=10;
    }
    string code = "codeforces";
    for(int i = 0;i <10;i++){
        for(int j = 0;j < a[i];j++){
            cout << code[i] ;
        }
    }
}
