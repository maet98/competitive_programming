#include<bits/stdc++.h>

using namespace std;

bool posible(char a,char b){
    if(b < a) swap(a,b);
    if(b ==a) return true;
    if(a+1 == b-1) return true;
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a;
        cin >> a;
        bool c = true;
        for(int i = 0;i < n/2;i++){
            if(!posible(a[i],a[n-i-1])){
                c = false;
                break;
            }
        }
        if(c){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        cout << endl;
    }

}
