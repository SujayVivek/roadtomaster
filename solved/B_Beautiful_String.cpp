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
    
    int k = 0;
    vi v;
    for(int i = 0; i<n; i++){
        if(s[i] == '1'){
            k++;
            v.push_back(i+1);
        }
    }

    cout<<k<<endl;
    for(int i= 0; i<v.size(); i++){
        cout<< v[i]<<" ";
    }cout<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}