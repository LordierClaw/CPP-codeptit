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
    stringstream k;
    string tmp;
    k << s;
    int i = 0;
    vector<string> a;
    while (k >> tmp) {
        for(int i = 0; i < tmp.size(); i++) {
            tmp[i] = tolower(tmp[i]);
        }
        a.emplace_back(tmp);
    }
    cout << a.back();
    for(int i = 0; i < a.size()-1; i++) cout << a[i][0];
    cout << "@ptit.edu.vn";
}

// May the flames guide thee