#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

class NhanVien {
private:
    string name;
    string gender;
    string date;
    string addr;
    string tax;
    string sign;
public:
    friend istream &operator >> (istream &in, NhanVien &nv) {
        getline(in, nv.name);
        getline(in, nv.gender);
        getline(in, nv.date);
        getline(in, nv.addr);
        getline(in, nv.tax);
        getline(in, nv.sign);
        return in;
    }

    friend ostream &operator << (ostream &out, NhanVien &nv) {
        out << "00001 " << nv.name << " " << nv.gender << " " << nv.date << " " << nv.addr << " " << nv.tax << " " << nv.sign;
        return out;
    }
};

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}

// May the flames guide thee