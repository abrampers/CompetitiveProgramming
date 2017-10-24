#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FAST_IO;
    int n, target[105], temp1, temp2;
    stack<int> s;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> target[i];
    }
    for (int i = n; i >= 1; i--) {
        s.push(target[i]);
    }

    while ((s.size() > 1) && (s.top() >= 0)) {
        if (s.top() == 0) {
            s.pop();
        } else {
            temp1 = s.top();
            s.pop();
            temp2 = s.top();
            s.pop();
            if (temp2 - temp1) {
                /* code */
            } else {
                /* code */
            }
        }
    }

    if (s.top() == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


}
