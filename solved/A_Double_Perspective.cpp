#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ff first
#define ss second
typedef vector<vector<long long>> vvi;
typedef vector<long long> vi;
#define int long long
#define endl "\n"

vi par, Rank;

int find(int x){
    if(x == par[x]) return x;
    else return par[x] = find(par[x]);
}

void merge(int x, int y){
    x = find(x), y = find(y);
    if(Rank[x]>= Rank[y]){
        Rank[x]+= Rank[y];
        par[y] = x;
    }else{
        Rank[y]+= Rank[x];
        par[x] = y;
    }
}


void Solve() {
    int n; cin>>n;
    par.assign(2*n+1, 0);
    Rank.assign(2*n+1, 0);

    for(int i = 1; i<=2*n; i++){
        par[i] = i; Rank[i] = 1;
    }
    vector<int> vp;
    for(int i = 0; i<n; i++){
        int a, b; cin>>a>>b;
        if(find(a) == find(b)) continue;
        merge(a, b);
        vp.push_back(i+1);
    }
    cout<<vp.size()<<endl;
    for(int i = 0; i<vp.size(); i++){
        cout<<vp[i]<<" ";
    }cout<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}