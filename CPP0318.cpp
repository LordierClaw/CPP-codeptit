#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

bool check1(string s) {
    for(int i = 1; i < s.size(); i++) {
        if (s[i] <= s[i-1]) return false;
    }
    return true;
}

bool check2(string s1, string s2) {
    for(int i = 1; i < s1.size(); i++) {
        if (s1[i] != s1[i-1]) return false;
    }
    for(int i = 1; i < s2.size(); i++) {
        if (s2[i] != s2[i-1]) return false;
    }
    return true;
}

bool check3(string s) {
    for(int i = 1; i < s.size(); i++) {
        if (s[i] != '6' && s[i] != '8') return false;
    }
    return true;
}

bool solve(string s) {
    string s1 = s.substr(5, 3);
    string s2 = s.substr(9);
    return check1(s1+s2) || check2(s1, s2) || check3(s1+s2);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        if (solve(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

// May the flames guide thee