#include <cstdio>
#include <stack>
#include <vector>
using namespace std;

#define pb push_back
#define vi vector<int>

int main() {
    int n, a;
    int mini = 1;
    bool jalan = true;
    vi input;
    stack<int> gang;

    while (true) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            input.pb(a);
        }

        for (int i = 0; (i < n); i++) {
           while (!gang.empty() && (gang.top() == mini)) {
               gang.pop();
               mini++;
           }
            if (input[i] != mini) {
                gang.push(input[i]);
            } else {
                mini++;
            }
            while (!gang.empty() && (gang.top() == mini)) {
                gang.pop();
                mini++;
            }
        }

        if (gang.empty()) {
            printf("yes\n");
        } else {
            printf("no\n");
            while (!gang.empty()) {
                gang.pop();
            }
        }

        input.clear();
        mini = 1;
    }

    return 0;

}
