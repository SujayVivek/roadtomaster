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
    vi a(n);
    int maxA = 0;
    unordered_set<int> pp, pq;
    for (int i = 0; i<n; i++) {
        cin >> a[i];
        pq.insert(a[i]);
        if (a[i]>k) {
            cout<<-1<<endl;
            return;
        }
        pp.insert(a[i]); maxA = max(maxA, a[i]);
    }
    // for(auto x: pq) cout<<x<<" ";
    vi vals(pp.begin(), pp.end());
    sort(vals.begin(), vals.end());

    vi f;
    unordered_set<int> fset;
    for (int x : vals) {
        if ((k / x) != (maxA / x)) continue;
        bool ok = true;
        for (long long m = x; m <= maxA; m += x) {
            if (pp.find(m) == pp.end()) {
                ok = false;
                break;
            }
        }
        if (ok) {
            f.push_back(x);
            fset.insert(x);
        }
    }
    vi dd; 
    for(auto x: pq){
        dd.push_back(x+maxA);
    }
    unordered_set<int> done;
    for (int c :f) {
        for (long long m = c; m <= maxA; m += c) {
            if (pp.find((int)m) != pp.end())
                done.insert((int)m);
        }
    }
    for (int v:vals) {
        if (done.find(v) == done.end()) {
            cout<<-1<< endl;
            return;
        }
    }
    reverse(dd.begin(), dd.end());
    sort(f.begin(), f.end());
    unordered_map<int, bool> ok;
    int R = dd.size();

    for (int c : f) ok[c] = false;
    for (int i = 0; i <(int)f.size(); i++) {
        int d = f[i];
        if (ok[d]) continue;
        for (long long m = d+d; m <= maxA; m += d) {
            if (fset.find((int)m) != fset.end()) {
                ok[(int)m] = true;
            }
        }
        if(R>dd.size())return;
    }
    vi B;
    for (int c : f) {
        if (!ok[c]) B.push_back(c);
    }
    if(R>dd.size()) return;
    cout << B.size()<<endl;
    for(auto &x: B) cout<<x<<" ";
    cout << endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}