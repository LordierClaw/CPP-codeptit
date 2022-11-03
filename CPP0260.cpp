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
    int a[n][n], b[n*n];
    for(int i = 0; i < n*n; i++) cin >> b[i];
    sort(b, b+n*n);

    int d = 0, k = 0;
    while(d < n/2) {
        for(int i = d; i < n-d-1; i++) a[d][i] = b[k++];
        for(int i = d; i < n-d-1; i++) a[i][n-d-1] = b[k++];
        for(int i = n-d-1; i > d; i--) a[n-d-1][i] = b[k++];
        for(int i = n-d-1; i > d; i--) a[i][d] = b[k++];
        d++;
    }
    if (n % 2 != 0) a[n/2][n/2] = b[k];
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

// May the flames guide thee