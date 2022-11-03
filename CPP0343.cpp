#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

bool check(string s) {
    stringstream k;
    string tmp;
    k << s;
    int c0 = 0, c1 = 0, cnt = 0;
    while(k >> tmp) {
        cnt++;
        int x = stoi(tmp);
        if (x % 2 == 0) c0++;
        else c1++;
    }
    if (cnt % 2 == 0 && c0 > c1) return true;
    else if (cnt % 2 != 0 && c0 < c1) return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    cin.ignore();
    while(T--) {
        string s;
        getline(cin, s);
        if (check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

// May the flames guide thee