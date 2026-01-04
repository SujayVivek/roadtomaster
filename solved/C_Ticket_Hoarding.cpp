#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ff first
#define ss second
typedef vector<vector<long long>> vvi;
typedef vector<long long> vi;
#define int long long
#define endl "\n"

void Solve() {
    int n, m, k; cin>>n>>m>>k;
    vector<pair<int,int>> a(n);
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        a[i] = {x, i};
    }
    sort(a.begin(), a.end());
    vector<pair<int,int>>v;
    int mx = 0;
    for(int i = 0; i<(k+m-1)/m; i++){
        v.push_back({a[i].second, a[i].first});
        mx = max(mx, a[i].first);
    }
    sort(v.begin(), v.end());
    int cum = 0, c = 0; 
    bool ok = true;
    for(auto p: v){
        int idx = p.first, num = p.second;
        if(num == mx && ok && k%m!=0){
            int dif = k%m;
            c+= dif*(num + cum);
            cum+= dif;
            ok = false;
        }else{
            c+= m*(num + cum);
            cum+= m;
        }
    }
    cout<<c<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}