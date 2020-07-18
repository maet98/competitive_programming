#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        bool c = false;
        int n;
        cin >> n;
        vector<int>a(n);
        for(int&i:a) cin >> i;
        int j = n-1;
        while(j > 0){
            if(!c){
                if(a[j] > a[j-1]){
                    c = true;
                }
            }
            else{
                if(a[j] < a[j-1]){
                    break;
                }
            }
            j--;
        }
        cout << j << endl;
    }
}

