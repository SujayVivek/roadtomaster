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
    int a, b, c; cin>>a>>b>>c;
    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());
    cout<<min(v[2] - v[0], v[1])<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}