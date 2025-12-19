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
    int a, b; cin>>a>>b;
    int Xor = a^b;

    vi v;
    for(int i = 0; i<=31; i++){
        if(Xor&(1<<i)){
            if((1<<i)>a){
                cout<<-1<<endl;
                return;
            }
            a^=(1<<i);
            v.push_back(1<<i);
        }
    }
    cout<<v.size()<<endl;
    for(auto c: v) cout<<c<<" ";
    if(v.size()) cout<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}