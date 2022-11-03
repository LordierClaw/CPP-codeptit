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
        int a[n+2] = {}, b[n+2] = {};
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            a[i] = a[i-1] + a[i];
        }
        for(int i = 1; i <= n; i++) {
            cin >> b[i];
            b[i] = b[i-1] + b[i];
        }
        int res = 1;
        for(int i = 1; i <= n; i++) {
            for(int j = i; j <= n; j++) {
                if (a[j]-a[i-1] == b[j]-b[i-1]) res = max(res, j-i+1);
            }
        }
        cout << res << endl;
    }
}

// May the flames guide thee