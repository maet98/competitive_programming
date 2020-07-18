#include<bits/stdc++.h>

using namespace std;
string a;

int fun(bool lado,int n,int cont,int first){
    //cout << lado << ' ' << n << ' ' << cont << ' ' << first << endl;
    if(n == 1){
        int c1 = (a[first] != ('a'+cont));
        int c2;
        if(lado){
            c2 = (a[first+1] != ('a'+cont+1));
        }
        else{
            c2 = (a[first-1] != ('a'+cont+1));
        }
        return c1 + c2;
    }
    int c = 0;
    for(int i = first;i < first+n;i++){
        c+= (a[i]!=('a'+cont));
    }
    int inv = first;
    if(lado){
        inv+=n*2;
        inv-=n/2;
    }
    else{
        inv-=n*2;
        inv+=n;
    }
    int ans = 1e9;
    ans = min(ans,c + fun(!lado,n/2,cont+1,inv));
    if(lado){
        ans = min(ans,c + fun(lado,n/2,cont + 1,first + n));
    }
    else{
        ans = min(ans,c + fun(lado,n/2,cont+1,first-(n/2)));
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cin >> a;
        if(n ==1){
            cout << (a[0] != 'a') << endl;
            continue;
        }
        int ans = n+1;
        ans = min(ans,fun(true,n/2,0,0));
        ans = min(ans,fun(false,n/2,0,n/2));
        cout << ans << endl;
    }
}
