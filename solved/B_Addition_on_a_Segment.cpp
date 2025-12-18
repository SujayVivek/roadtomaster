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
    vi b(n,0);
    int z = 0, s = 0;
    for(int i = 0; i<n; i++){
        cin>>b[i];
        if(b[i] == 0)z++;
        s+= b[i];
    }
    cout<< min(s - n + 1, n - z)<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}