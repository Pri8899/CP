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
    vll v;
    if ( n != 0) {
        while (n != 0) {
            v.pb(n % 10); n /= 10;
        }
        ll sum1 = 0, sum2 = 0;
        rep (i, 0, 3) sum1 += v[i];
        rep (i, 3, v.size()) sum2 += v[i];
        sum1 == sum2 ? Y : N;
    }
    else Y;
}

int main() {
    FASTIO
    int t; cin >> t;
    while (t--) solve();
}