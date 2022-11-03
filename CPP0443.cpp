#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

vector<bool> a(MAXX+2, 0);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        int n, inp;
        a = vector<bool>(MAXX+2, 0);
        cin >> n;
        n--;
        while(n--) {
            cin >> inp;
            a[inp] = 1;
        }
        for(int i = 1; i < a.size(); i++) {
            if (a[i] == 0) {
                cout << i << endl;
                break;
            }
        }
    }
}

// May the flames guide thee