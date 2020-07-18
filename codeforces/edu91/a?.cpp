#include<bits/stdc++.h>
#define readn(a) for(int&i:a) cin >> i;

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        readn(a);
        int es = 0;
        int ans[3];
        for(int i = 0;i <n-1;i++){
            if(es == 0){
                if(a[i] < a[i+1]){
                    es++;
                    ans[0] = i+1;
                }
            }
            else if(es == 1){
                if(a[i] > a[i+1]){
                    ans[1] = i+1;
                    ans[2] = i+2;
                    es++;
                    break;
                }
            }
        }
        if(es == 2){
            cout << "YES" << endl;
            cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
