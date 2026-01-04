#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ff first
#define ss second
typedef vector<vector<long long>> vvi;
typedef vector<long long> vi;
#define int long long
#define endl "\n"

void Solve() 
{
    int n; cin >> n;
    map <int, int> f;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        f[x]++;
    }
    vector <pair<int, int>> b;
    for (auto [x, y] : f){
        if (y >= 4){
            cout << "Yes\n";
            return;
        }
        b.push_back({x, y});
    }
    int k = b.size();
    for (int i = 0; i < k; i++){
        int r = i;
        while (r + 1 < k && b[r + 1].first == b[r].first + 1){
            r++;
        }
        int cnt = 0;
        for (int j = i; j <= r; j++){
            cnt += b[j].second >= 2;
        }
        if (cnt >= 2){
            cout << "Yes\n";
            return;
        }
        i = r;
    }
    
    cout << "No\n";
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}