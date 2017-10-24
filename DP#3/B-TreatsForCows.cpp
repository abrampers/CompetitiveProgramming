#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int a, b, c, ret1, ret2;
int dp[2005][2005];
int front = 0, rear;
int input[2005];
int day = 0;

int ngedp(int front, int rear) {
    int &ret = dp[front][rear];
    if (ret == -1) {
        if (front == rear) {
            // basecase
            ret = input[front] * (a - (front - rear) );
        } else {
            ret = max(
                ngedp(front + 1, rear) + input[front] * (a - (rear - front)),
                ngedp(front, rear - 1) + input[rear] * (a - (rear - front))
            );
            // ret1 = ngedp(pos + 1, day + 1) + input[front] * day;
            // ret2 = ngedp(pos + 1, day + 1) + input[rear] * day;
            //
            // if (ret1 > ret2) {
            //     ret = ret1;
            //     front++;
            // } else {
            //     ret = ret2;
            //     rear--;
            // }
        }
    }
    return ret;
}



int main() {
    memset(dp, -1, sizeof dp);
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        scanf("%d", (input + i));
    }

    front = 0;
    rear = a - 1;

    printf("%d\n", ngedp(front, rear));

    return 0;
}
