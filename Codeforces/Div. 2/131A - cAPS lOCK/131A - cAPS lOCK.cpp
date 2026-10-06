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
    string s; cin >> s;
    ll U = 0, L = 0;
    rep (i, 0, s.size()) {
        if (islower(s[i])) L++;
        else U++;
    }
    if (L == 1 && U == s.size() - 1 && islower(s[0])) {
        transform(all(s), s.begin(), :: tolower);
        s[0] -= 32;
        cout << s << nl;
    }
    else if (U == s.size()) {
        transform(all(s), s.begin(), :: tolower);
        cout << s << nl;
    }
    else cout << s << nl;
}

int main() {
    FASTIO
    solve();
}