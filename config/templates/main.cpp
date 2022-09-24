#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define sortt(x) sort(all(x))
#define sortn(x, n) sort((x), (x) + (n))
#define sq(a) ((a) * (a))

#define each(x, xs)  for (auto &x : (xs))
#define rep(i, be, en) for (__typeof(en) i = (be) - ((be) > (en)); i != (en) - ((be) > (en)); i += 1 - 2 * ((be) > (en)))
#define FOR(i, a, b) for (ll (i) = (a); (i) < (b); (i)++)

using ll = long long;
using ld = long double;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using ti = tuple<long long, long long, long long>;
using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vs = vector<string>;
using vvl = vector<vl>;
using vpl = vector<pl>;
template<class T> using pql = priority_queue<T,vector<T>,greater<T>>;
template<class T> using pqg = priority_queue<T>;

// >>>>>>>>>> debugging >>>>>>>>>>
#ifdef LOCAL
    #include DEBUG
    #define LINE cerr << "-------------------" << endl;
#else
    #define deb(x...)
    #define LINE
#endif
// <<<<<<<<<< debugging <<<<<<<<<<

void _(string s) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifdef LOCAL
    FILE* avoidW;
    avoidW = freopen((s + ".in").c_str(),  "r", stdin);
    avoidW = freopen((s + ".out").c_str(), "w", stdout);
    avoidW = freopen((s + ".err").c_str(), "w", stderr);
    static_cast<void>(avoidW);
#endif
}

const ll INF = INT64_MAX;
const int inf = INT32_MAX;
const ld PI = acos(-1);
const int MOD = 1e9 + 7;
const int DX[4]{1,0,-1,0}, DY[4]{0,1,0,-1};

void test_case();

int main() {
    _("main");
    int T;
    cin >> T;
    rep (t, 0, T) { test_case(); }

    return 0;
}

void test_case() {
    int n;
}
