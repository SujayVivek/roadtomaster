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
    int n, k; cin>>n>>k;
    vi a(n+1, 0);
    a[n] = n-1, a[n-1] = n;
    int l = 0;
    if(k%2==1) l = n;
    else l = n-1;
    for(int i = 1; i<n-1; i++) a[i] = l;
    for(int i = 1; i<=n; i++) cout<<a[i]<<" ";
    cout<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}