#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

bool check(char x) {
    string k = "aeiouy";
    for(int i = 0; i < k.size(); i++) {
        if (x == k[i]) return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    vector<char> a;
    for(int i = 0; i < s.size(); i++) {
        char x = tolower(s[i]);
        if (!check(x)) a.emplace_back(x);
    }
    for(int i = 0; i < a.size(); i++) {
        cout << '.' << a[i];
    }
}

// May the flames guide thee