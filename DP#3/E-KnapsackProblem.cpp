#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;
int w[20005];
int v[20005];
int dp[20005][20005];

int ngedp(int pos, int rem) {
    int &ret = dp[pos][rem];
    if (ret == -1) {
        if (pos == n) {
            // basecase
            ret = 0;
        } else {
            if (rem - w[pos] >= 0) {
                // bisa diambil, bandingin maximumnya
                ret = max(
                    ngedp(pos + 1, rem - w[pos]) + v[pos] , ngedp(pos + 1, rem)
                );
            } else {
                // gabisa diambil, terpaksa maju
                ret = ngedp(pos + 1, rem);
            }
        }
    }
    return ret;
}



int main() {
    memset(dp, -1, sizeof dp);
    scanf("%d %d", &m, &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &w[i], &v[i]);
    }

    printf("%d\n", ngedp(0, m));
    return 0;
}
