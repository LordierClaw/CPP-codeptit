#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

struct PhanSo {
    ll t, m;
};

void nhap(PhanSo &p) {
    cin >> p.t >> p.m;
}

PhanSo tong(PhanSo p, PhanSo q) {
    PhanSo r;
    r.m = p.m*q.m;
    r.t = p.t*q.m + q.t*p.m;
    ll k = __gcd(r.t, r.m);
    r.t /= k;
    r.m /= k;
    return r;
}

void in(PhanSo r) {
    cout << r.t << "/" << r.m;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
// May the flames guide thee