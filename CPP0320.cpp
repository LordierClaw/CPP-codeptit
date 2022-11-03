#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

string solve(string s) {
    if (s[0] == '0') return "INVALID";
    int a[10] = {};
    for(int i = 0; i < s.size(); i++) {
        if (s[i] < '0' || s[i] > '9') return "INVALID";
        a[s[i]-'0'] = 1;
    }
    for(int i = 0; i < 10; i++) {
        if (a[i] == 0) return "NO";
    }
    return "YES";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
}

// May the flames guide thee