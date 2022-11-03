#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

string solve(string s) {
    int n = s.size();
    for(int i = n-2; i > 0; i--) {
        if (s[i] > s[i+1]) {
            int k = i+1;
            for(int j = i+1; j < n; j++) {
                if (s[j] < s[i]) {
                    if (s[j] > s[k]) k = j;
                }
            }
            swap(s[i], s[k]);
            return s;
        }
    }
    return "-1";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
}

// May the flames guide thee