#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int m;
    cin >> m;
    int b[m][m];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            a[i][j] *= b[i%m][j%m];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

// May the flames guide thee