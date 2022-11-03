#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

bool check(string s) {
    int h = 0;
    for(int i = 0; i < s.size(); i++) {
        int x = s[i]-'0';
        if ((i+1) % 2 != 0) h += x;
        else h -= x;
    }
    return (abs(h) % 11 == 0);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
}

// May the flames guide thee