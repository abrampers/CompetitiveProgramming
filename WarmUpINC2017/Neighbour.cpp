//TLE
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define fi first
#define se second

bool comp(int a, int b) {
    return a > b;
}

int main() {
    int n, a, b, count;
    vector<pair<int, int> > coordinate;
    priority_queue<int> neighbor;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        coordinate.pb(mp(a, b));
    }

    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (coordinate[i].fi == coordinate[j].fi) {
                    if (coordinate[i].se != coordinate[j].se) {
                        count++;
                    }
                } else if(coordinate[i].se == coordinate[j].se) {
                    if (coordinate[i].fi != coordinate[j].fi) {
                        count++;
                    }
                }
            }
        }
        neighbor.push(count);
    }
    printf("%d\n", neighbor.top());
    return 0;
}
