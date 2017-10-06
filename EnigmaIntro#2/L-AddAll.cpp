#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

#define pb push_back
#define vi vector<int>

int main() {
    int n, a, temp, cost = 0, temp1;
    vector<int> input;
    priority_queue<int> res;

    while (true) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            input.pb(a);
        }
        sort(input.begin(), input.end());
        for (int i = 0; i < n; i++) {
            res.push(input[i] * (-1));
        }

        while (res.size() != 1) {
            temp = res.top();
            res.pop();
            temp1 = temp + res.top();
            res.pop();
            cost += temp1;
            res.push(temp1);
        }


        printf("%d\n", cost * -1);

        input.clear();
        while(!res.empty()) { res.pop(); }
        cost = 0;
    }

    return 0;

}
