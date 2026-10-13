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
#define Y       cout << "I become the guy.\n"
#define N       cout << "Oh, my keyboard!\n"
#define rep(i,a,b)  for(int i=(a); i<(b); i++)
#define per(i,a,b)  for(int i=(b)-1; i>=(a); i--)
#define each(x,v)   for(auto& x : v)

void solve () {
    ll n; cin >> n;
    vll v;
    ll a; cin >> a;
    rep (i, 0, a) {
        ll x; cin >> x;
        v.pb(x);
    }
    ll b; cin >> b;
    rep (i, 0, b) {
        ll x; cin >> x;
        v.pb(x);
    }
    set<ll> s(all(v));
    s.size() == n ? Y : N;
}

int main() {
    FASTIO
    solve();
}