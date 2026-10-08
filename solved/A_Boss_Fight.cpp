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
    map<int,int> m;
    vector<int> a(n+1,0);
    for(int i=1;i<=n;i++){
                cin>>a[i];
                m[a[i]]++;
            } 
    int ans=0;
    for(int i=1;i<=n;i++){ 
        ans+=min(m[a[i]],n-m[a[i]]+2)*a[i];
        m[a[i]]=0;
     }
    cout<<ans<<"\n";
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}