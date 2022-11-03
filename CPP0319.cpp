#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

string getMax(int m, int s) {
    string res = "";
    while(s > 0) {
        int k;
        if (s > 9) k = 9;
        else k = s;
        s -= k;
        res += char(k+'0');
    }
    if (res.size() > m) return "-1";
    return res + string(m-res.size(), '0');
}

string getMin(string res) {
    reverse(res.begin(), res.end());
    int j = 0;
    while(j < res.size() && res[j] == '0') j++;
    if (j != 0) {
        res[j]--;
        res[0] = '1';
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int m, s;
    cin >> m >> s;
    if (s == 0) {
        if (m == 1) cout << "0 0";
        else cout << "-1 -1";
        return 0;
    }
    string maxS = getMax(m, s);
    if (maxS == "-1") {
        cout << "-1 -1";
        return 0;
    }
    cout << getMin(maxS) << " " << maxS;
}

// May the flames guide thee