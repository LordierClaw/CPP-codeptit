#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    string s;
    getline(cin, s);
    stringstream k; string tmp;
    k << s;
    vector<string> a;
    while(k >> tmp) {
        tmp[0] = toupper(tmp[0]);
        for(int i = 1; i < tmp.size(); i++) {
            tmp[i] = tolower(tmp[i]);
        }
        a.emplace_back(tmp);
    }
    for(int i = 0; i < a.size()-2; i++) {
        cout << a[i] << " ";
    }
    cout << a[a.size()-2] << ", ";
    for(int i = 0; i < a.back().size(); i++) {
        cout << (char)toupper(a.back()[i]);
    }
}

// May the flames guide thee