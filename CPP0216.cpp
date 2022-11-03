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
        int l, r;
        cin >> l >> r;
        int check = 0;
        for(int i = l+1; i <= r; i++) {
            if (check % 2 == 0) {
                if (a[i] >= a[i-1]) continue;
                else check++;
            } else if (check % 2 == 1) {
                if (a[i] <= a[i-1]) continue;
                else check++;
            }
        }
        if (check <= 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}

// May the flames guide thee