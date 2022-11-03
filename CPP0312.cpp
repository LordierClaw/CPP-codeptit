#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        int a[27] = {};
        for(char x: s) {
            a[x-'a'] = 1;
        }
        int k, cnt = 0;
        cin >> k;
        for(int i = 0; i < 26; i++) {
            if (a[i] == 0) cnt++;
        }
        if (k >= cnt && (s.size()-cnt) >= 0) cout << 1;
        else cout << 0;
        cout << endl;
    }
}

// May the flames guide thee