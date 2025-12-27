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
    int l, a, b; cin>>l>>a>>b;
    map<int,int> mpp;
    int mx = 0;
    int cur = a;
    while(mpp[cur] == 0){
        mpp[cur] = 1;
        mx = max(mx, cur);
        cur = (cur + b)%l;
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