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
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        int l = 0, r = n-1;
        int i = 0;
        while(l <= r) {
            if (i == 0) cout << a[r--];
            else cout << a[l++];
            cout << " ";
            i = !i;
        }
        cout << endl;
    }
}

// May the flames guide thee