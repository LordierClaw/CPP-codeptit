#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e6+5;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        int a[n];
        vector<int> d(MAXX, 0);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int check = 0;
        for(int i = 0; i < n; i++) {
            d[a[i]]++;
            if (d[a[i]] > 1) {
                cout << a[i] << endl;
                check = 1;
                break;
            }
        }
        if (check == 0) cout << -1 << endl;
    }
}

// May the flames guide thee