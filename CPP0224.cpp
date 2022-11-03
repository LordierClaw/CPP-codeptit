#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int a[105][105];
int n, m;

void DFS(int x, int y) {
    stack<pair<int, int>> k;
    k.push({x, y});
    while(k.size()) {
        pair<int, int> u = k.top();
        k.pop();
        a[u.first][u.second] = 0;
        for(int i = 0; i < 8; i++) {
            int nx = u.first + dx[i], ny = u.second + dy[i];
            if (0 <= nx && nx < m && 0 <= ny && ny < n) {
                if (a[nx][ny] == 1) k.push({nx, ny});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        cin >> n >> m;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int res = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if (a[i][j] == 1) DFS(i, j), res++;
            }
        }
        cout << res << endl;
    }
}

// May the flames guide thee