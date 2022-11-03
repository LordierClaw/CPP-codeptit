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

    friend istream &operator >> (istream &in, PhanSo &ps) {
        in >> ps.t >> ps.m;
        return in;
    }

    friend ostream &operator << (ostream &out, PhanSo &ps) {
        out << ps.t << '/' << ps.m;
        return out;
    }
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}

// May the flames guide thee