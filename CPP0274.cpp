#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e6+2;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        map<int, int> a;
        while(n--) {
            int inp;
            cin >> inp;
            a[inp]++;
        }
        int res = 0;
        for(auto x: a) {
            int y = x.second;
            res += y>1?y:0;
        }
        cout << res << endl;
    }
}

// May the flames guide thee