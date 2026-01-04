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
    int n, l, r; cin>>n>>l>>r;
    vi v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    vi c = v;
    c.push_back(l), c.push_back(r);
    sort(c.begin(), c.end());
    int sz= c.size();
    int med = c[sz/2];
    // cout<<sz/2<<" "<<med<<endl;
    int ans = 0;
    for(auto x: v) ans+= abs(med - x);
    cout<<ans<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}