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
    cin.ignore();
    getline(cin, a.name);
    cin >> a.gender >> a.date;
    cin.ignore();
    getline(cin, a.addr);
    cin >> a.tax >> a.taxdate;
}

void inds(NhanVien ds[], int n) {
    for(int i = 0; i < n; i++) {
        string s = to_string(i+1);
        while(s.size() < 5) s = '0' + s;
        cout << s << " " << ds[i].name << " " << ds[i].gender << " " << ds[i].date << " " << ds[i].addr << " " << ds[i].tax << " " << ds[i].taxdate << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}

// May the flames guide thee