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
    int n; cin>>n;
    vector<int> v(n);
    for(auto &x: v) cin>>x;

    int cnt = 0;
    int mx = -1;
    for(int i = 0; i<n; i++){
        if(v[i]>= mx) {cnt++; mx = v[i]; }
    }
    cout<<cnt<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}