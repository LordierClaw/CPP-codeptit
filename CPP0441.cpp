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
        int a[n];
        int res = -1;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            if (a[i] == x) {
                res = i+1;
                break;
            }
        }
        cout << res << endl;
    }
}

// May the flames guide thee