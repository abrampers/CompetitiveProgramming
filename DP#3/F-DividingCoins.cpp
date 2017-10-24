#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int m;
int coins[105];
int dp[600][50005];

int divide(int pos, int selisih) {
    int &ret = dp[pos][selisih];
    if (ret == -1) {
        if (pos == m) {
            ret = selisih;
        } else {
            ret = min(
                divide(pos + 1, abs(selisih - coins[pos])),
                divide(pos + 1, abs(selisih + coins[pos]))
            );
        }
    }
    return ret;
}

int main() {
    int n, coin;
    memset(dp, -1, sizeof dp);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &m);

        for (int j = 0; j < m; j++) {
            scanf("%d", &coin);
            coins[j] = coin;
        }

        printf("%d\n", divide(0, 0));
        memset(dp, -1, sizeof dp);
    }

    return 0;
}
