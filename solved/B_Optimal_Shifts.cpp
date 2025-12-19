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
    s+= s;
    int mx = 0, cnt = 0;
    for(int i = 0; i<2*n; i++){
        if(s[i] == '0') cnt++;
        else{
            mx = max(mx, cnt);
            cnt = 0;
        }
    }
    cout<<mx<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}