#include <cstdio>
#include <cstring>
#include <algorithm>
#include <limits.h>
using namespace std;

int n, k;
int bush[1005];
int dp[1005][1005];

int ngedp(int pos, int total) {
    if (total > k) {
        // bisa diambil, bandingin maximumnya
        return INT_MIN;
    }
    if (pos >= n) {
        // basecase
        return total;
    }
    if (dp[pos][total] != -1) {
        // gabisa diambil, terpaksa maju
        return dp[pos][total];
    }
    dp[pos][total] = max(ngedp(pos + 2, total + bush[pos]), ngedp(pos + 1, total));
    return dp[pos][total];
}

int main() {
    int testcase;

    memset(dp, -1, sizeof dp);
    scanf("%d", &testcase);

    for (int l = 0; l < testcase; l++) {
        scanf("%d %d", &n, &k);
        for (int i = 0; i < n; i++) {
            scanf("%d", &bush[i]);
        }

        printf("Scenario #%d: %d\n", l + 1, ngedp(0, 0));
        memset(dp, -1, sizeof dp);
    }
    return 0;
}
