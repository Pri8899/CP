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
    vector<vector<ll>> v(5, vector<ll> (5));
    rep (i, 0, 5) {
        rep (j, 0, 5) {
            cin >> v[i][j];
        }
    }
    rep (i, 0, 5) {
        rep (j, 0, 5) {
            if (v[i][j] == 1) {
                cout << abs((i + 1) - 3) + abs((j + 1) - 3) << nl;
                return;
            }
        }
    }
}

int main() {
    FASTIO
    solve();
}