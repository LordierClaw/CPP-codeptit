#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e5;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<vector<bool>> a(n, vector<bool>(MAXX+2, 0));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int inp;
                cin >> inp;
                a[i][inp] = 1;
            }
        }
        int res = 0;
        for(int i = 0; i < MAXX; i++) {
            if (a[0][i] == 1) {
                int cnt = 1;
                for(int j = 1; j < n; j++) {
                    if (a[j][i] == 1) cnt++;
                }
                if (cnt == n) res++;
            }
        }
        cout << res << endl;
    }
}

// May the flames guide thee