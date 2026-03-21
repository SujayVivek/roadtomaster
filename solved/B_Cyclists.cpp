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
    int n, k, m, p; cin>>n>>k>>p>>m;
    deque<int> dq;
    multiset<int> st;
    vector<int> v;
    for(int i = 0; i<n; i++)
    {   
        int x; cin>>x;
        if(i<k){
            st.insert(x);
        }else{
            dq.push_back(x);
        }
        v.push_back(x);
    }
    int pos = p, cost = 0, win_cond = v[p-1], cnt = 0;
    while(cost<=m){
        // cout<<cost<<" "; 
        if(pos<=k){
            cost+= win_cond;
            auto it = st.find(win_cond);
            st.erase(it);
            dq.push_back(win_cond);
            int fr = dq.front();
            st.insert(fr);
            dq.pop_front();
            if(cost<=m)cnt++;
            pos = n;
        }else{
            auto it = st.begin();
            cost+= *it;
            dq.push_back(*it);
            st.erase(it);
            int fr = dq.front();
            st.insert(fr);
            dq.pop_front();
            pos--;
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