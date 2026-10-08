#include <bits/stdc++.h>
using namespace std;

void Solve() {
    int n, m;
    cin >> n >> m;

    bool have[26] = {};
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        have[s[0] - 'a'] = 1;
    }

    vector<string> a(m);
    for (auto &s : a) cin >> s;

    int cnt = 0;

    while (cnt < m) {
        bool ok = false;

        for (auto &s : a) {
            if (s.empty()) continue;

            bool can = 1;
            for (char c : s)
                if (!have[c - 'A'])
                    can = 0;

            if (can) {
                have[s[0] - 'A'] = 1;
                s.clear();
                cnt++;
                ok = 1;
            }
        }

        if (!ok) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) Solve();
}