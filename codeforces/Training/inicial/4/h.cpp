#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    int ini = -1;
    int fin = -1;
    int j = 0;
    for(int i = 0;i <(int)b.size();i++){
        if(a[j] == b[i]){
            j++;
            if(j == (int)a.size()){
                fin = i;
                break;
            }
        }
    }
    j = a.size()-1;
    for(int i= b.size()-1;i >=0;i--){
        if(b[i] == a[j]){
            j--;
            if(j == -1){
                ini = i;
                break;
            }
        }
    }
    if(ini != -1 && fin != -1){
        if(fin > ini){
            cout << 0;
        }
        else{
            cout << ini - fin;
        }
    }
    else{
        cout << 0;
    }
}
