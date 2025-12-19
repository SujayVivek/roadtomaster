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
    string s,t; cin>>s>>t;
    int n=s.size(), m=t.size();
    vi c(26);
    for(char x:t) c[x-'a']++;
    vector<array<int,26>> suf(n+1);
    for(int i=0;i<=n;i++) suf[i].fill(0);
    for(int i=n-1;i>=0;i--) {
        suf[i]=suf[i+1];
        suf[i][s[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(c[i] < suf[0][i]) {
            cout<<"Impossible"<<endl;
            return;
        }
    }
    string ans;
    ans.reserve(m);
    int p=0;

    for(int k=0;k<m;k++){
        bool f=0;
        for(int x=0;x<26;x++){
            if(!c[x]) continue;
            c[x]--;
            int p2 = p + (p<n && x==(s[p]-'a')); bool ok=1;
            for(int y=0;y<26;y++){
                if(c[y] < suf[p2][y]) ok=0;
            }
            if(ok){
                ans.push_back('a'+x); p=p2;
                f=1;
                break;
            }
            c[x]++;
        }
        if(!f){
            cout<<"Impossible"<<endl;
            return;
        }
    }
    cout<<ans<<endl;
}

int32_t main() {
    int tt_ = 1;
    cin >> tt_;
    while (tt_--) {
        Solve();
    }
    return 0;
}