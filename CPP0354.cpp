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
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++) {
            int j = i;
            for(j = i; j < s.size(); j++) {
                if (s[j] != s[i]) break;
            }
            j--;
            cout << s[i] << j-i+1;
            i = j;
        }
        cout << endl;
    }
}

// May the flames guide thee