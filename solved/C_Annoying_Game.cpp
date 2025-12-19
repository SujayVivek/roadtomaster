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
    int n; int k; cin>>n>>k;
    vi a(n), b(n);
    for(auto &x: a) cin>>x;
    for(auto &x: b) cin>>x;

    int res = a[0], cur = a[0];
    for(int i=1;i<n;i++){
        cur = max(a[i], cur + a[i]);
        res = max(res, cur);
    }
    if(k % 2 == 0) {
        cout <<res<<endl;
        return;
    }
    vi l(n,0), r(n,0);
    l[0] = a[0];
    for(int i=1;i<n;i++) l[i] = max(a[i], l[i-1] + a[i]);
    r[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--) r[i] = max(a[i], r[i+1] + a[i]);

    int ans = LLONG_MIN;
    for(int i=0;i<n;i++){
        int include = l[i] + r[i] - a[i];
        ans = max(ans, include + b[i]);
    }
    cout << ans <<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}