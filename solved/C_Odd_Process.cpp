#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ff first
#define ss second
typedef vector<vector<long long>> vvi;
typedef vector<long long> vi;
#define int long long
#define endl "\n"

void Solve(){
    int n;cin>>n;
    vector<int> evens,odds;
    evens.reserve(n);odds.reserve(n);
    for(int i=0;i<n;i++){
        int a;cin>>a;
        if((a&1)==0) evens.push_back(a);
        else odds.push_back(a);
    }
    sort(evens.begin(),evens.end(),greater<int>());
    sort(odds.begin(),odds.end(),greater<int>());
    int E=evens.size(),O=odds.size();
    vector<int> sumE(E+1),ans(n+1);
    for(int i=1;i<=E;i++) sumE[i]=sumE[i-1]+evens[i-1];
    if(O==0){
        for(int k=1;k<=n;k++) cout<<0<<(k==n?'\n':' ');
        return;
    }
    int bestOdd=odds[0];
    for(int k=1;k<=n;k++){
        int best=0;
        int maxEforSuffix=min(E,k-1);
        bool found=false;
        for(int e=maxEforSuffix;e>=0;e--){
            int m=1+e;
            if(m>k) continue;
            int p=k-m;
            int remE=E-e,remO=O-1;
            int lower=max(0LL,p-remE);
            int upper=min(p,remO);
            if(lower>upper) continue;
            bool hasEven=false;
            if((lower&1)==0) hasEven=true;
            else if(lower+1<=upper) hasEven=true;
            if(!hasEven) continue;
            long long cand=bestOdd+sumE[e];
            best=cand;
            found=true;
            break;
        }
        if(!found) best=0;
        ans[k]=best;
    }
    for(int k=1;k<=n;k++) cout<<ans[k]<<(k==n?'\n':' ');
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt_=1;cin>>tt_;
    while(tt_--) Solve();
    return 0;
}
