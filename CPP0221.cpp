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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int d = 0;
        while(d < min(n/2, m/2)) {
            int tmp = a[d][d];
            for(int i = d; i < n-d-1; i++) a[i][d] = a[i+1][d];
            for(int i = d; i < m-d-1; i++) a[n-d-1][i] = a[n-d-1][i+1];
            for(int i = n-d-1; i > d; i--) a[i][m-d-1] = a[i-1][m-d-1];
            for(int i = m-d-1; i > d+1; i--) a[d][i] = a[d][i-1];
            a[d][d+1] = tmp;
            d++;
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
}

// May the flames guide thee