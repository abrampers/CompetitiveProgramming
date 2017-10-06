#include <cstdio>
#include <vector>
using namespace std;

#define vi vector<int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second

int main() {
    int n, m, a, b, j, temp;
    pair<int, int> song;
    vector<pair<int, int> > playlist;
    vi search;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        playlist.pb(mp(a, b));
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &a);
        search.pb(a);
    }

    j = 0;
    temp = 0;
    for (int i = 0; i < m; i++) {
        while (search[i] > (temp + (playlist[j].fi * playlist[j].se))) {
            temp += (playlist[j].fi * playlist[j].se);
            j++;
        }
        printf("%d\n", j + 1);
    }

    return 0;

}
