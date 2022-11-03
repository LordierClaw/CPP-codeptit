#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

struct SinhVien {
    string name;
    string cla;
    string date;
    double gpa;
};

void formatDate(string &date) {
    int i = 0, j = 0;
    while(date[i] != '/') i++;
    j = i+1;
    while(date[j] != '/') j++;
    string dd = date.substr(0, i);
    string mm = date.substr(i+1, j-i-1);
    string yy = date.substr(j+1);
    if (dd.size() < 2) dd = '0' + dd;
    if (mm.size() < 2) mm = '0' + mm;
    date = dd + '/' + mm + '/' + yy;
}

void nhapThongTinSV(SinhVien &a) {
    getline(cin, a.name);
    cin >> a.cla >> a.date >> a.gpa;
    formatDate(a.date);
}

void inThongTinSV(SinhVien a) {
    cout << "N20DCCN001" << " " << a.name << " " << a.cla << " " << a.date << " ";
    cout << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}

// May the flames guide thee