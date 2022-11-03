#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

bool check(string s) {
    int k = 0;
    for(int i = 0; i < s.size(); i++) {
        k = (k*2 + s[i]-'0') % 5;
    }
    return k == 0;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        if (check(s)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}

// May the flames guide thee