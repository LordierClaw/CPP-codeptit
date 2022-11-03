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
        int l = 0, r = n-1, cnt = 0;
        while(l <= r) {
            if (a[l] == a[r]) l++, r--;
            else if (a[l] < a[r]) a[l+1] = a[l] + a[l+1], l++, cnt++;
            else if (a[l] > a[r]) a[r-1] = a[r] + a[r-1], r--, cnt++;
        }
        cout << cnt << endl;
    }
}

// May the flames guide thee