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
    int n, k;
    cin >> n >> k;

    if (k % 2 == 1) {
        for (int i = 0; i < k; ++i) {
            cout << n << " ";
        }
        cout << "\n";
    } else {
        int cpy = n;
        vi v;
        while(cpy){
            v.push_back(cpy%2); cpy/=2;
        }
        int x = 0;
        for(int i = 0; i<v.size(); i++){
             x+= ((v[i]^1)<<(i+1));
        }
        int N =n^x;
        cout<<N<<" hi"<<endl;
        for(int i = 0; i<k-2; i++) cout<<n<<" ";
        cout<<x<<" "<<N<<endl;
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