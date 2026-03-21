#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ff first
#define ss second
typedef vector<vector<long long>> vvi;
typedef vector<long long> vi;
#define int long long
#define endl "\n"

int m;
int lcm(int a, int b){
    return (a*b)/__gcd(a, b);
}
int calc(int a, int b, int c){
    int ab = m / lcm(a, b);
    int ac = m / lcm(a, c);
    int abc = m / lcm(lcm(a, b), c);

    int onlyA = m/a - ab - ac + abc;
    int onlyAB = ab - abc;
    
    int onlyAC = ac - abc;

    int alice = onlyA * 6 + (onlyAB + onlyAC) * 3 + abc * 2;

    return alice;
}
void Solve() {
    int a, b, c; cin>>a>>b>>c>>m;
    cout<<calc(a, b, c)<<" "<<calc(b, c, a)<<" "<<calc(c, a, b)<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}