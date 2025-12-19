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
    int n;
    cin >> n;
    vi a(2*n, 0);
    for (int &x : a) cin >> x;
    unordered_map<int,int> f;
    for (int x : a) f[x]++;

    int o = 0, e = 0;
    for (auto &p : f) {
        if (p.second%2) o++;
        else e++;
    }
    int y =min(e, n);    
    if ((n-y)%2 == 1 && o == 0) y--;  
    if (y < 0) y = 0;
    cout <<o+2*y<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}