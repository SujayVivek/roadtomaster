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
    vi a(n, 0), b(n, 0);
    set<int> st;
    for(auto &x: a) cin>>x;
    for(int i = 0; i<n; i++){
        cin>>b[i];
        st.insert(b[i]);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    int cnt = 0;
    for(int i = 0; i<n; i++){
        int y = b[0]+1;
        int q = (k - b[0])/y;
        if(q<=0) continue;
        int dist = lower_bound(a.begin(), a.end(), q) - a.begin();
        cout<<"q = "<<q<<endl;
        cout<<"dist "<<dist<<endl;
        if(dist - 1<0) continue;
        auto it = st.find(a[dist-1]);
        if(it==st.end()) continue;
        st.erase(it);
        cnt++;
    }
    cout<<cnt<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}