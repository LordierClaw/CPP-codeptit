#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, m, p;
    cin >> n >> m >> p;
    int a[n][m], b[m][p];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            cin >> b[i][j];
        }
    }
    int c[n][p];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            c[i][j] = 0;
            for(int t = 0; t < m; t++) {
                c[i][j] += a[i][t]*b[t][j];
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

// May the flames guide thee