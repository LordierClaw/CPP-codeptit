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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < m; i++) {
            for(int j = 1; j < n; j++) {
                if (a[j][i] == 1) a[j][i] = a[j-1][i]+1;
            }
        }

        int res = 0;

        for(int i = 0; i < n; i++) {
            sort(a[i].begin(), a[i].end());

            int l[m] = {}, r[m] = {};
            stack<int> k;
            for(int j = 0; j < m; j++) {
                while(k.size() && a[i][j] <= a[i][k.top()]) k.pop();
                if (k.empty()) l[j] = 0;
                else l[j] = k.top()+1;
                k.push(j);
            }
            k = stack<int>{};
            for(int j = m-1; j >= 0; j--) {
                while(k.size() && a[i][j] <= a[i][k.top()]) k.pop();
                if (k.empty()) r[j] = m-1;
                else r[j] = k.top()-1;
                k.push(j);
            }

            for(int j = 0; j < m; j++) {
                res = max(res, (r[j]-l[j]+1)*a[i][j]);
            }
        }
        cout << res << endl;
    }
}

// May the flames guide thee