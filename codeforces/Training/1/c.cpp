#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,p;
    cin >> n >> p;
    string a;
    cin >> a;
    bool c = true;
    for(int i = 0;i <n -p;i++){
        if(a[i] == '.'){
            if(a[i+p] == a[i]){
                c = false;
                break;
            }
            else{
                a[i] = a[i+p];
            }
        }
    }
    for(int i = 0;i <n -p;i++){
        if(a[i] != a[i+p]){
            c = false;
        }
    }
    if(c){
        cout <<a;
    }
    else{
        cout << "NO";
    }
}
