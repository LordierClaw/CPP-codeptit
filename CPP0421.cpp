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
        int b[n];
        for(int i = 0; i < n; i++) {
            b[i] = -1;
        }
        for(int i = 0; i < n; i++) {
            ll inp;
            cin >> inp;
            if (inp >= 0 && inp < n) b[inp] = inp;
        }
        for(int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}

// May the flames guide thee