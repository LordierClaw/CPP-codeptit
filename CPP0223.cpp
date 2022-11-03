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
        int b[n*m+10] = {}, cnt = 0;
        while(cnt < n*m) {
            for(int i = d; i < m-d-1; i++) b[cnt++] = a[d][i];
            for(int i = d; i < n-d-1; i++) b[cnt++] = a[i][m-d-1];
            for(int i = m-d-1; i > d; i--) b[cnt++] = a[n-d-1][i];
            for(int i = n-d-1; i > d; i--) b[cnt++] = a[i][d];
            d++;
        }
        for(int i = 0; i < n*m; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}

// May the flames guide thee