#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

struct NhanVien {
    string name, gender, date, addr, tax, taxdate;
};

void nhap(NhanVien &a) {
    getline(cin, a.name);
    cin >> a.gender >> a.date;
    cin.ignore();
    getline(cin, a.addr);
    cin >> a.tax >> a.taxdate;
}

void in(NhanVien a) {
    cout << "00001 " << a.name << " " << a.gender << " " << a.date << " " << a.addr << " " << a.tax << " " << a.taxdate;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

// May the flames guide thee