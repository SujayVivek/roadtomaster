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
    int n, l, r;  cin>>n>>l>>r;
    vi P(n+1); P[0] = 1;                    
    int cur = 2;                
    for(int i = 1; i <= n; i++){
        if(i == r) continue;
        P[i] = cur++;
    }
    P[r] = P[l-1];
    for(int i = 1; i<= n; i++){
        cout <<(P[i]^P[i-1])<<" ";
    }
    cout << endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}