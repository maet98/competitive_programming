#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int c = 0;
    int ans = 0;
    while(n--){
        int x;cin >> x;
        if(x == 1){
            if(a > 0){
                a--;
            }
            else if(b > 0){
                b--;
                c++;
            }
            else if(c > 0){
                c--;
            }
            else{
                ans++;
            }
        }
        else{
            if(b == 0){
                ans+=2;
            }
            else{
                b--;
            }
        }
    }
    cout << ans << endl;

}
