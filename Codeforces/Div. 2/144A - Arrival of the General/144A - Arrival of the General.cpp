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
    ll n, mx = 0, mn = 10e18, imx = 0, imn = 0; cin >> n;
    vll v(n);
    rep (i, 0, n) {
        cin >> v[i];
        if (v[i] <= mn) {
            mn = v[i]; imn = i + 1;
        }
        if (v[i] > mx) {
            mx = v[i]; imx = i + 1;
        }
    }
    imn < imx ? cout << n - 2 - imn + imx << nl : cout << n - 1 - imn + imx << nl;
}

int main() {
    FASTIO
    solve();
}