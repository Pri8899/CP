#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

typedef long long           ll;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
typedef vector<int>         vi;
typedef vector<ll>          vll;

#define FASTIO  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb      push_back
#define nl      '\n'
#define Y       cout << "YES\n"
#define N       cout << "NO\n"
#define rep(i,a,b)  for(int i=(a); i<(b); i++)
#define per(i,a,b)  for(int i=(b)-1; i>=(a); i--)
#define each(x,v)   for(auto& x : v)

void solve () {
    ll n; cin >> n;
    if (1900 <= n) cout << "Division 1" << nl;
    else if (1600 <= n && n <= 1899) cout << "Division 2" << nl;
    else if (1400 <= n && n <= 1599) cout << "Division 3" << nl;
    else cout << "Division 4" << nl;
}

int main() {
    FASTIO
    int t; cin >> t;
    while (t--) solve();
}