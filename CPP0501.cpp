#include <bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
const int MOD = 1e9 + 7;
const int MAXX = 1e7;
using namespace std;

struct Point {
    double x, y;
};

void input(Point &x) {
    cin >> x.x >> x.y;
}

double distance(Point A, Point B) {
    return sqrt((A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y));
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}

// May the flames guide thee