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
        int n, k;
        cin >> n >> k;
        n *= n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        cout << a[k-1] << endl;
    }
}

// May the flames guide thee