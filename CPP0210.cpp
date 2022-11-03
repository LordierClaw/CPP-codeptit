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
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int b = a[0];
        int res = INT_MIN;
        for(int i = 1; i < n; i++) {
            if (a[i] < b) {
                b = a[i];
                continue;
            } else {
                res = max(res, a[i]-b);
            }
        }
        if (res != INT_MIN) cout << res << endl;
        else cout << -1 << endl;
    }
}

// May the flames guide thee