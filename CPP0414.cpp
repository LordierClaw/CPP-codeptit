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
        int n;
        cin >> n;
        int a[10] = {};
        while(n--) {
            string s;
            cin >> s;
            for(int i = 0; i < s.size(); i++) {
                a[s[i]-'0'] = 1;
            }
        }
        for(int i = 0; i < 10; i++) {
            if (a[i]) cout << i << " ";
        }
        cout << endl;
    }
}

// May the flames guide thee