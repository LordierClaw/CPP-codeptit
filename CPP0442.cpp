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
        int n, x;
        cin >> n >> x;
        int inp, res = -1;
        while(n--) {
            cin >> inp;
            if (inp == x) res = 1;
        }
        cout << res << endl;
    }
}

// May the flames guide thee