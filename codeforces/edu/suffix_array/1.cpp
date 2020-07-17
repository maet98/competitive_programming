#include <bits/stdc++.h>

using namespace std;

string a;
int n;

bool comparator(int& i, int& j){
    string b = a.substr(i, n-i+1);
    string c = a.substr(j, n-j+1);
    return b < c;
}


int main(){
    cin >> a;
    vector<int>id;
    n = a.size();
    for(int i = 0;i <n;i++){
        id.push_back(i);
    }
    sort(id.begin(),id.end(),comparator);
    cout << n;
    for(int& i : id){
        cout << " " << i;
    }
}
