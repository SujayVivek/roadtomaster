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
    string s; cin>>s;
    for(int i = 1; i<n;  i++){
        string c; cin>>c;
        string r, p;
            r = c + s;
            p = s + c;
        if(r>p) s = p;
        else s = r;
    }
    cout<<s<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}