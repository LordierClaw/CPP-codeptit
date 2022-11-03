#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e6;
using namespace std;

vector<int> prime(MAXX+5, 1);

void sieve(int n) {
    prime[0] = prime[1] = 0;
    for(int i = 2; i*i <= n; i++) {
        if (prime[i]) {
            for(int j = i*i; j <= n; j+=i) {
                prime[j] = 0;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    sieve(MAXX+2);
    int T;
    cin >> T;
    while(T--) {
        int l, r;
        cin >> l >> r;
        int cnt = 0;
        for(int i = l; i <= r; i++) if (prime[i]) cnt++;
        cout << cnt << endl;
    }
}

// May the flames guide thee