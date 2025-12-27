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
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int sum = 0;
    for (int i = 1; i < n; i++) {
        sum += llabs(a[i] - a[i - 1]);
    }
    int ans = sum;
    ans = min(ans, sum - llabs(a[1] - a[0]));
    ans = min(ans, sum - llabs(a[n - 1] - a[n - 2]));
    for (int i = 1; i < n - 1; i++) {
        int cur = sum - llabs(a[i] - a[i - 1]) - llabs(a[i + 1] - a[i]) + llabs(a[i + 1] - a[i - 1]);
        ans = min(ans, cur);
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}
