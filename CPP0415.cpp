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
        int n, m;
        cin >> n >> m;
        int a = INT_MIN, b = INT_MAX, inp;
        while(n--) cin >> inp, a = max(a, inp);
        while(m--) cin >> inp, b = min(b, inp);
        cout << 1LL*a*b << endl;
    }
}

// May the flames guide thee