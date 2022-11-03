#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

bool check(string s) {
    for(int i = 0; i < s.size()/2; i++) {
        if ((s[i]-'0') % 2 != 0) return false;
        if (s[i] != s[s.size()-i-1]) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        if (check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

// May the flames guide thee