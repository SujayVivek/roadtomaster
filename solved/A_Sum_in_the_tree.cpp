#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

typedef vector<long long> vi;
typedef vector<vector<long long>> vvi;

vi s;
vvi g;
vi arr;

bool ok = true;

void dfs(int node, int par) {

    if (s[node] == -1) {

        long long mn = LLONG_MAX;

        for (auto nn : g[node]) {
            if (nn == par) continue;

            mn = min(mn, s[nn]);
        }

        // Leaf node
        if (mn == LLONG_MAX) {
            s[node] = s[par];
        }
        else {
            s[node] = mn;
        }
    }

    if (s[node] < s[par]) {
        ok = false;
        return;
    }

    arr[node] = s[node] - s[par];

    for (auto nn : g[node]) {
        if (nn == par) continue;

        dfs(nn, node);

        if (!ok) return;
    }
}

void Solve() {

    int n;
    cin >> n;

    s.assign(n + 1, 0);
    g.assign(n + 1, {});
    arr.assign(n + 1, 0);

    for (int i = 2; i <= n; i++) {
        int x;
        cin >> x;

        g[x].push_back(i);
        g[i].push_back(x);
    }

    for (int i = 1; i <= n; i++)
        cin >> s[i];

    arr[1] = s[1];

    for (auto child : g[1]) {
        dfs(child, 1);

        if (!ok) {
            cout << -1 << endl;
            return;
        }
    }

    long long ans = s[1];

    for (int i = 2; i <= n; i++)
        ans += arr[i];

    cout << ans << endl;
}

int32_t main() {

    int tt = 1;

    while (tt--) {
        Solve();
    }

    return 0;
}