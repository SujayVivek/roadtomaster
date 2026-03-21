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
    int idx = 0;
    set<int> st;
    for(int i = 0; i<n; i++){
        st.insert(idx);
        if(s[idx] == 'R') idx++;
        else idx--;
    }
    cout<<st.size()<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}