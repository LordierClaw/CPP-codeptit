#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

class PhanSo {
private:
    ll t, m;
public:
    PhanSo() {};
    PhanSo(ll t, ll m) {
        this->t = t;
        this->m = m;
    }
    
    void rutgon() {
        ll k = __gcd(t, m);
        t /= k;
        m /= k;
    }

    friend istream &operator >> (istream &in, PhanSo &ps);

    friend ostream &operator << (ostream &out, PhanSo &ps);
    
    friend PhanSo &operator + (PhanSo &ps1, PhanSo &ps2);
};

istream &operator >> (istream &in, PhanSo &ps) {
    in >> ps.t >> ps.m;
    ps.rutgon();
    return in;
}

ostream &operator << (ostream &out, PhanSo &ps) {
    out << ps.t << '/' << ps.m;
    return out;
}

PhanSo &operator + (PhanSo &ps1, PhanSo &ps2) {
    ll t = ps1.t * ps2.m + ps2.t * ps1.m;
    ll m = ps1.m * ps2.m;
    PhanSo *x = new PhanSo(t, m);
    x->rutgon();
    return *x;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}

// May the flames guide thee