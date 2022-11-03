#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

int sum(string s) {
    int res = 0;
    for(char x: s) {
        res += x-'0';
    }
    return res;
}

bool solve(string s) {
    while(s.length() > 1) {
        int k = sum(s);
        if (k == 9) return true;
        s = to_string(k);
    }
    return (s == "9");
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