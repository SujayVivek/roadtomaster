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
    vi a(n), b(n);
    for(auto &x: a )cin>> x; 
    for(auto &x: b )cin>> x;
    int l = 0, r = 0;
    for(int i = 0; i<n; i++){
        int newL = min(l-a[i], b[i]-r);
        int newR = max(r-a[i], b[i]-l);
        l = newL, r = newR;
    }
    cout<<r<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}