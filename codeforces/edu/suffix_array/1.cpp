#include <bits/stdc++.h>

using namespace std;

string a;
int n;

bool comparator(int& i, int& j){
    string b = a.substr(i, n-i+1);
    string c = a.substr(j, n-j+1);
    return b < c;
}

vector<int> sort_cyclic_shifts(string const& s){
    int n = s.size();
    const int alphabet = 256;
    vector<int>p(n),c(n), cnt(max(alphabet,n),0);
    for(int i = 0;i < n;i++) cnt[s[i]]++;

    for(int i = 1;i < alphabet;i++)
        cnt[i] += cnt[i-1];
    for(int i = 0;i < n;i++){
        p[--cnt[s[i]]] = i;
    }
    c[p[0]] = 0;
    int classes = 0;
    for(int i = 0;i <n;i++){
        if(s[p[i]] != s[p[i-1]]) classes++;
        c[p[i]] = classes;
    }
    vector<int> pn(n), cn(n);
    for(int h = 0;(1 << h) < n;++h){
        for(int i = 0;i <n;i++){
            pn[i] = p[i]

        }
        c.swap(cn);
    }
    return p;
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
