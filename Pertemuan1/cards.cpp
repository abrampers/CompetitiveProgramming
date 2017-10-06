#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;
    pair<int,int> p[1000];


    for (int i = 0; i < n; i++) {

        int x;
        cin >> x;
        p[i] = make_pair(x, i + 1);
    }

    sort(p, p + n);

    for (int i = 0; i < n / 2; i++) {
        cout << p[i].second << " " << p[n - i - 1].second << endl;
    }



    return 0;
}
