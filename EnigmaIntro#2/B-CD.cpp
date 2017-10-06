#include <cstdio>
#include <algorithm>
#include <stack>
using namespace std;

#define vi vector<int>
#define pb push_back

int main() {
    int n, m, a, mini, count = 0, j;
    bool jalan = true;
    stack<int> jack;
    stack<int> jill;

    while (true) {
        scanf("%d %d", &n, &m);
        if ((n == 0) && (m == 0)) {
            break;
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            jack.push(a);
        }

        for (int i = 0; i < m; i++) {
            scanf("%d", &a);
            jill.push(a);
        }

        if (n > m) {
            mini = m;
        } else {
            mini = n;
        }

        while((!jack.empty()) && (!jill.empty())) {
            if (jack.top() == jill.top()) {
                jack.pop();
                jill.pop();
                count++;
            } else if (jack.top() < jill.top()) {
                jill.pop();
            } else {
                jack.pop();
            }
        }


        printf("%d\n", count);
        count = 0;
    }

    return 0;

}
