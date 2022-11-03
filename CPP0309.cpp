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
    cin.ignore();
    while(T--) {
        string s;
        getline(cin, s);
        stringstream k;
        k << s;
        string tmp;
        int cnt = 0;
        while (k >> tmp) {
            cnt++;
        }
        cout << cnt << endl;
    }
}

// May the flames guide thee