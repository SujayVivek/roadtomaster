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
    vi v;
    int num = (1<<n)-1;
    for(int i = 1; i<=n+1; i++){
        v.push_back(num);
        if(i>1)
        for(int j = 1; j<=((1<<(i-2))-1); j++){
            int newN = (j<<(n-i+2));
            v.push_back(num^newN);
        }
        num = num^(1<<(n-i));
    }

    for(auto x: v)cout<<x<<" ";
    cout<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}