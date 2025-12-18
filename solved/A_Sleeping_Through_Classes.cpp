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
    string s; cin>>s;
    int cnt = 0, i = 0;
    int f = -1;
    for(int i = 0; i<n; i++){
        if(s[i] == '1'){
            f = max(f, i + k);
        }else{
            if(i>f){
                cnt++;
            }
        }
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