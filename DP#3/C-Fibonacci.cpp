#include <cstdio>
#include <cstring>
using namespace std;

int dp[500008];

int fibo(int n) {
    int &ret = dp[n];
    if (ret == -1) {
        if (n == 1) {
            ret = 1;
        } else if (n == 2) {
            ret = 1;
        } else {
            ret = (fibo(n - 1) + fibo(n - 2) ) % 100000007;
        }
    }
    return ret;
}

int main() {
    int number, x;
    memset(dp, -1, sizeof dp);
    scanf("%d", &number);

    for (int i = 0; i < number; i++) {
        scanf("%d", &x);
        printf("%d\n", fibo(x));
    }
}
