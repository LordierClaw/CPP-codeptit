#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();
    map<string, bool> a;
    while(n--) {
        string s;
        getline(cin, s);
        a[s] = 1;
    }
    cout << a.size();
}

// May the flames guide thee