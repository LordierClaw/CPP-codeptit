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
        int check = 0;
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int inp;
        map<ll, int> a;
        while(n1--) cin >> inp, a[inp]++;
        while(n2--) cin >> inp, a[inp]++;
        while(n3--) cin >> inp, a[inp]++;
        for(auto x: a) {
            if (x.second == 3) cout << x.first << " ";
            check = 1;
        }
        if (check == 0) cout << -1;
        cout << endl;
    }
}

// May the flames guide thee