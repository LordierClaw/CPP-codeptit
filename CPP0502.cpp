#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

struct ThiSinh {
    string name;
    string date;
    float s1, s2, s3;
};

void nhap(ThiSinh &a) {
    getline(cin, a.name);
    cin >> a.date;
    cin >> a.s1 >> a.s2 >> a.s3;
}

void in(ThiSinh a) {
    cout << a.name << " " << a.date << " ";
    cout << fixed << setprecision(1) << a.s1+a.s2+a.s3;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

// May the flames guide thee