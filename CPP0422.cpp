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
        ll a[n];
        int c0 = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) c0++;
        }
        for(int i = 0; i < n; i++) {
            if (a[i] != 0) cout << a[i] << " ";
        }
        for(int i = 0; i < c0; i++) {
            cout << "0 ";
        }
        cout << endl;
    }
}

// May the flames guide thee