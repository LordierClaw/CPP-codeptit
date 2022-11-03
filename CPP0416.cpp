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
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            cnt += upper_bound(a+i+1, a+n, k-a[i]) - lower_bound(a+i+1, a+n, k-a[i]);
        }
        cout << cnt << endl;
    }
}

// May the flames guide thee