#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    string s, a;
    getline(cin, s);
    getline(cin, a);
    stringstream k;
    string tmp;
    k << s;
    while(k >> tmp) {
        if (tmp != a) cout << tmp << " ";
    }
}

// May the flames guide thee