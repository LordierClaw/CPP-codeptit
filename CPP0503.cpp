#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

struct PhanSo {
    ll tu, mau;
};

void nhap(PhanSo &p) {
    cin >> p.tu >> p.mau;
}

void rutgon(PhanSo &p) {
    ll k = __gcd(p.tu, p.mau);
    p.tu /= k;
    p.mau /= k;
}

void in(PhanSo &p) {
    cout << p.tu << '/' << p.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

// May the flames guide thee