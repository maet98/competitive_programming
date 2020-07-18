#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        map<char,int>mp;
        string s;
        cin >> s;
        for(char i:s){
            mp[i]++;
        }
        char mx = 'R';
        for(auto i:mp){
            if(mp[mx] < i.second){
                mx = i.first;
            }
        }
        int n = s.size();
        for(int i = 0;i <n;i++){
            if(mx == 'R'){
                cout << 'P';
            }
            else if(mx == 'S'){
                cout << 'R';
            }
            else{
                cout << 'S';
            }
        }
        cout << endl;
    }
}
