#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e5+2;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        int n, inp;
        cin >> n;
        int l = INT_MAX, r = INT_MIN;
        int a[MAXX] = {};
        for(int i = 0; i < n; i++) {
            cin >> inp;
            a[inp] = 1;
            l = min(l, inp);
            r = max(r, inp);
        }
        int cnt = 0;
        for(int i = l; i <= r; i++) {
            if (a[i] == 0) cnt++;
        }
        cout << cnt << endl;
    }
}

// May the flames guide thee