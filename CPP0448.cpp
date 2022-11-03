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
        int n, x, inp;
        cin >> n >> x;
        vector<int> a(MAXX, 0);
        for(int i = 0; i < n; i++) {
            cin >> inp;
            a[inp]++;
        }
        if (a[x] > 0) cout << a[x];
        else cout << -1;
        cout << endl;
    }
}

// May the flames guide thee