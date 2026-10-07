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
    vector<string> v = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    string s; cin >> s;
    ll n; cin >> n;
    rep (i, 0, v.size()) {
        if (s == v[i]) {
            n += i; n++; break;
        }
    }
    n % 12 == 0 ? n = 12 : n %= 12;
    cout << v[n - 1] << nl;
}

int main() {
    FASTIO
    solve();
}