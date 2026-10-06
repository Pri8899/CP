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
    ll max = 0, cnt = 1;
    stack<char> st;
    st.push(s[0]);
    rep (i, 1, s.size()) {
        if (!st.empty() && st.top() == s[i]) {
            cnt++;
        }
        else {
            if (cnt >= max) max = cnt;
            st.push(s[i]);
            cnt = 1;
        }
    }
    if (cnt >= max) max = cnt;
    cout << max << nl;
}

int main() {
    FASTIO
    solve();
}