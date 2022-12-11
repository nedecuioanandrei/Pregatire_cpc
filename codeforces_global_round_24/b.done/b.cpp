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

void test_case() {
    /// 5 10 25
    /// 2 12 -> 12, 10 .. 0
    /// 1 12 -> all 
    /// min_diff in all 
    /// vor every element count the multi
    /// 5 10 25
    /// a b c
    /// x y -> gcd(x,y), 0
    /// gcd(all) ... max(all)
    /// 6 3
    /// 3 1 -> 1
    /// 7 4 -> 1 
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll gcd_ = 0;
    ll maxima = -1;
    for (ll & it : a) {
        cin >> it;
        gcd_ = __gcd(gcd_, it);
        maxima = max(maxima, it);
    }
    cout << maxima / gcd_ << endl;
    
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
