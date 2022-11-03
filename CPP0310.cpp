#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

string conv(string s, char x, char y) {
    for(int i = s.size()-1; i >= 0; i--) {
        if (s[i] == x) s[i] = y;
    }
    return s;
}

ll calc(string s, int k) {
    if (k == 1) s = conv(s, '6', '5');
    else if (k == 2) s = conv(s, '5', '6');
    return stoll(s);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        string s1, s2;
        cin >> s1 >> s2;
        ll rmin = LLONG_MAX, rmax= LLONG_MIN;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                ll x = calc(s1, i) + calc(s2, j);
                rmin = min(x, rmin);
                rmax = max(x, rmax);
            }
        }
        cout << rmin << " " << rmax << endl;
    }
}

// May the flames guide thee