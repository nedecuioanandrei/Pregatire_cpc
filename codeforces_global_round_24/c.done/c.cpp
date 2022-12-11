/*
  (づ ￣ ³￣)づ
*/
#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
using ll = long long;
using ull = unsigned long long;
using lld = long double;
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).begin(),(x).end()
using namespace std;
using namespace __gnu_pbds;
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using ll = long long;
using ull = unsigned long long; 

/// 2 2 3 1 
///
/// 1 2 2 3 
/// 1 <-> 3 <-> 2
///       |
///       2
///
///

void test_case() {
    int n;
    cin >> n;
    vector<int> w(n);
    for (int& it : w) {
        cin >> it;
    }
    ll ans = 0LL;
    sort(w.begin(), w.end());
    if (w[0] == w[n - 1]) {
        cout << n / 2 << endl;
    } else {
        for(int l = 0, r = 0; l < n; l = r = r + 1) {
            while (r < n - 1 && w[r + 1] == w[l]) {
                ++r;
            }
            ans = max(ans, 1LL * (n - r - 1) * (r + 1));
        }
        cout << ans << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
            
	int tests;
	cin >> tests;
	while(tests--) {
		test_case();
	}
	
	return 0x0;
}
