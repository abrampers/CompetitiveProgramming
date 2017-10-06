#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

#define pb push_back
#define vi vector<int>

int main() {
    int n, m, a, mini, count = 0, j;
    bool jalan = true;
    vector<int> jack;

    while (true) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            jack.pb(a);
        }

        sort(jack.begin(), jack.end());

        for (int i = 0; i < n-1; i++) {
            printf("%d ", jack[i]);

        }

        printf("%d\n", jack[n - 1]);
        count = 0;

        jack.clear();
    }

    return 0;

}
