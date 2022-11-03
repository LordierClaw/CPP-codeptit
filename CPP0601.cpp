#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

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

class SinhVien {
private:
    string name;
    string cla;
    string date;
    float gpa;
public:
    void nhap() {
        getline(cin, name);
        cin >> cla >> date >> gpa;
        formatDate(date);
    }

    void xuat() {
        cout << "B20DCCN001 " << name << " " << cla << " " << date << " ";
        cout << fixed << setprecision(2) << gpa;
    }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

// May the flames guide thee