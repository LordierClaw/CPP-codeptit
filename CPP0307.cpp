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
        string s1, s2;
        map<string, bool> a1, a2;
        getline(cin, s1);
        getline(cin, s2);

        stringstream k1, k2;
        string tmp;
        k1 << s1;
        while(k1 >> tmp) a1[tmp] = 1;
        k2 << s2;
        while(k2 >> tmp) a2[tmp] = 1;
        for(auto x: a1) {
            if (!a2[x.first]) cout << x.first << " ";
        }
        cout << endl;
    }
}

// May the flames guide thee