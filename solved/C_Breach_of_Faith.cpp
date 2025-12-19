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
    map<int,int> mpp;
    vi a(2*n);
    for(int i = 0; i<2*n; i++){
        cin>>a[i];
        mpp[a[i]]++;
    }
    sort(a.begin(), a.end(), greater<int>());
    int s= 0;
    for(int i = 0; i<2*n; i++){
        if(i%2==0) s+= a[i];
        else s-=a[i];
    }
    if(mpp[s]){
        // cout<<s<<" =s"<<endl;
        s = s-(a[0]-a[1]);
        // cout<<s<<" =news"<<endl;
        int p = a[0] + a[1] - s;
        cout<<a[0]<<" ";
        cout<<p<<" ";
        for(int i = 1; i<2*n; i++) cout<<a[i]<<" ";
        cout<<endl;
    }else{
        cout<<s<<" ";
        for(auto x: a) cout<<x<<" ";
        cout<<endl;
    }
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}