#include<bits/stdc++.h>

using namespace std;

#define dlog2(n) (31-__builtin_clz(n))
template<class T>
struct SparseTable {
	int N, L;
	vector<vector<T>> table;
	SparseTable(const vector<T> &V):
			N(V.size()), L(dlog2(N)+1), table(L, vector<T>(N)){
		table[0] = V;
		for(int sz = 1; sz < L; ++sz){
			for (int i = 0; i < N; ++i) {
				if(i + (1<<sz) > N)break;
				table[sz][i] = max(table[sz-1][i], table[sz-1][i+(1<<(sz-1))]);
			}
		}
	}
	T get(int i, int j){
		int d = dlog2(j-i+1);
		return max(table[d][i], table[d][j-(1<<d)+1]);
	}
};
int main(){
    int n,q;
    cin >> n >> q;
    vector<int>a(n);
    for(int&i:a) cin >> i;
    SparseTable<int> st = SparseTable<int>(a);

    int ans = 0;
    while(q--){
        int l,r;
        cin >> l >> r;
        int x = l -1;
        if(l > r) swap(l,r);
        r-=2;
        if(st.get(l,r) <= a[x]) ans++;
    }
    cout << ans;
}
