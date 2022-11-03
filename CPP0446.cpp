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
        int res = INT_MAX;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                int x = a[i]+a[j];
                if (abs(x) < abs(res)) res = x;
            }
        }
        cout << res << endl;
    }
}

// May the flames guide thee