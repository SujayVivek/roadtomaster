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
    int n, x; cin >> n >> x;
    vector <pair<int, int>> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    vector <int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];
    vector <int> ans(n);
    sort(b.begin(), b.end());
    
    for (int i = 0; i < n; i++){
        if (i < x){
            if (a[i + n - x].first <= b[i]){
                cout << "NO\n";
                return;
            }
            
            ans[a[i + n - x].second] = b[i];
        } else {
            if (a[i - x].first > b[i]){
                cout << "NO\n";
                return;
            }
            
            ans[a[i - x].second] = b[i];
        }
    }
    
    cout << "YES\n";
    for (auto x : ans) cout << x << " ";
    cout << "\n";
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}