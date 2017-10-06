#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int a, b, ret1, ret2;
int dp[105][105];

int ngedp(int persen1, int persen2) {
    int &ret = dp[persen1][persen2];
    if (ret == -1) {
        if (persen1 <= 0 || persen2 <= 0) {
            // basecase
            ret = 0;
        } else {
            ret = 0;
            if (persen1 - 2 >= 0) {
                // bisa diambil, bandingin maximumnya
                ret = max(ret, ngedp(persen1 - 2, persen2 + 1) + 1);
            }

            if (persen2 - 2 >= 0) {
                // bisa diambil, bandingin maximumnya
                ret = max(ret, ngedp(persen1 + 1, persen2 - 2) + 1);
            }


        }
    }
    return ret;
}



int main() {
    memset(dp, -1, sizeof dp);
    scanf("%d %d", &a, &b);

    printf("%d\n", ngedp(a, b));
    return 0;
}
