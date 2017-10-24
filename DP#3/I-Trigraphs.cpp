#include <cstdio>
#include <cstring>
#include <algorithm>
#include <limits.h>
using namespace std;

int m;
int graph[1000005][3];
int dp[100005][3];

int shortpath(int posX, int posY) {
    int &ret = dp[posY][posX];
    if (ret == -1) {
        if (posY == (m - 1) && posX == 1) {
            ret = graph[m - 1][1];
        } else {
            if (posY < (m - 1)) {
                if (posX == 0) {
                    ret = min(
                        shortpath(posX + 1, posY) + graph[posY][posX],
                        min(
                            shortpath(posX + 1, posY + 1) + graph[posY][posX],
                            shortpath(posX, posY + 1) + graph[posY][posX]
                        )
                    );
                } else if (posX == 1) {
                    ret = min(
                        shortpath(posX + 1, posY) + graph[posY][posX],
                        min(
                            shortpath(posX + 1, posY + 1) + graph[posY][posX],
                            min(
                                shortpath(posX, posY + 1) + graph[posY][posX],
                                shortpath(posX - 1, posY + 1) + graph[posY][posX]
                            )
                        )
                    );
                } else {
                    ret = min(
                        shortpath(posX, posY + 1) + graph[posY][posX],
                        shortpath(posX - 1, posY + 1) + graph[posY][posX]
                    );
                }
            } else {
                if (posX == 0) {
                    ret = shortpath(posX + 1, posY) + graph[posY][posX];
                } else if (posX == 1) {
                    ret = graph[m - 1][1];
                } else {
                    ret = 9999999;
                }
            }
        }
    }
    return ret;
}

// int shortpath(int posX, int posY) {
//     int &ret = dp[posY][posX];
//     if (ret == -1) {
//         if (posY == (m - 1) && posX == 1) {
//             ret = graph[m - 1][1];
//         } else {
//             if (posX == 0) {
//                 if (posY < (m - 1)) {
//                     ret = min(
//                             shortpath(posX, posY + 1) + graph[posY][posX],
//                             min(
//                                 shortpath(posX + 1, posY + 1) + graph[posY][posX],
//                                 shortpath(posX + 1, posY) + graph[posY][posX]
//                             )
//                         );
//                 } else {
//                     ret = shortpath(posX + 1, posY) + graph[posY][posX];
//                 }
//             } else if (posX == 1) {
//                 if (posY < (m - 1)) {
//                     ret = min(
//                             shortpath(posX, posY + 1) + graph[posY][posX],
//                             min(
//                                 shortpath(posX - 1, posY + 1) + graph[posY][posX],
//                                 min(
//                                     shortpath(posX + 1, posY + 1) + graph[posY][posX],
//                                     shortpath(posX + 1, posY) + graph[posY][posX]
//                                 )
//                             )
//                         );
//                 } else {
//                     ret = graph[m - 1][1];
//                 }
//             } else {
//                 if (posY < (m - 1)) {
//                     ret = min(
//                         shortpath(posX, posY + 1) + graph[posY][posX],
//                         shortpath(posX - 1, posY + 1) + graph[posY][posX]
//                     );
//                 } else ret = 9999999;
//             }
//         }
//         printf("%d %d %d\n", posX, posY, ret);
//     }
//     return ret;
// }

int main() {
    int input, n = 1;
    memset(dp, -1, sizeof dp);

    while(true) {
        scanf("%d", &m);
        if (m == 0) {
            break;
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < 3; j++) {
                scanf("%d", &input);
                graph[i][j] = input;
            }
        }

        printf("%d. %d\n", n, shortpath(1, 0));
        memset(dp, -1, sizeof dp);
        n++;
    }

    return 0;
}
