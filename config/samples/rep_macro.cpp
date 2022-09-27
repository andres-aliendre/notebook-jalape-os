#include <bits/stdc++.h>
using namespace std;

#define rep(i, be, en) for (__typeof(en) i = (be) - ((be) > (en)); \
                            i != (en) - ((be) > (en)); \
                            i += 1 - 2 * ((be) > (en)))

int main() {
    int n = 10;

    rep (i, 0, n) { cout << i << ' '; }
    cout << endl;
    // 0 1 2 3 4 5 6 7 8 9

    rep (i, 0, n + 1) { cout << i << ' '; }
    cout << endl;
    // 0 1 2 3 4 5 6 7 8 9 10

    rep (i, n, 0) { cout << i << ' '; }
    cout << endl;
    // 9 8 7 6 5 4 3 2 1 0

    rep (i, n + 1, 0) { cout << i << ' '; }
    cout << endl;
    // 10 9 8 7 6 5 4 3 2 1 0

    vector<int> a = {0, 2, 4, 6, 8, 10};
    rep (it, a.begin(), a.end()) { cout << *it << ' '; }
    cout << endl;
    // 0 2 4 6 8 10

    rep (it, a.end(), a.begin()) { cout << *it << ' '; }
    cout << endl;
    // 10 8 6 4 2 0
}