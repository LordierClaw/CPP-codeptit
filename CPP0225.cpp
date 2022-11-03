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
        int a[n][n], b[n] = {}, c[n] = {};
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n ; j++) {
                cin >> a[i][j];
                b[i] += a[i][j];
                c[j] += a[i][j];
            }
        }
        int k = 0, res = 0;
        for(int i = 0; i < n; i++) {
            k = max(k, max(b[i], c[i]));
        }

        for(int i = 0, j = 0; i < n && j < n;) {
            int x = min(k-b[i], k-c[j]);
            b[i] += x;
            c[j] += x;
            res += x;
            if (b[i] == k) i++;
            if (c[j] == k) j++;
        }

        cout << res << endl;
    }
}

// May the flames guide thee