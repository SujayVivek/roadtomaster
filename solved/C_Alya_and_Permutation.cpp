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
    int n; cin>>n; int cpyn = n, ctr = 0;
    while(cpyn){
        cpyn/=2; ctr++;
    }
    int big = (1<<ctr) - 1;
    vi v;
    if(n%2){
        cout<<n<<endl;
        cout<<"2 1 "; v.push_back(2), v.push_back(1);
        for(int i = 3; i<=n; i++) {cout<<i<<" "; v.push_back(i);}
        cout<<endl;
    }else{
        int prevBig = (1<<(ctr - 1))-1;
        cout<< big<<endl;
        cout<<"2 1 "; v.push_back(2), v.push_back(1);
        for(int i = 3; i<=n; i++) if(i!=prevBig) {cout<<i<<" "; v.push_back(i);}
        cout<<prevBig<<endl;
        v.push_back(prevBig);
    }
    //check
    int k = 0;
    for(int i = 1; i<=n; i++){
        if(i%2) k&=v[i-1];
        else k|=v[i-1];
    }
    cout<<"HI "<<k<<endl;
    
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}