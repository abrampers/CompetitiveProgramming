#include <bits/stdc++.h>
#include <utility>
#include <algorithm>
using namespace std;

int l[1005];

int main() {
    int n;

    cin >> n;

    int towers = 0;
    int mx = 0;

    for (int i = 0; i < n; i++) {

        int x;
        cin >> x;
        l[x]++;

    }

    for (int i = 1; i <= 1000; i++) {
        if (mx < l[i]) mx = l[i];

        if (l[i]  > 0) towers++;

    }

    cout << mx << " " << towers << endl;



    return 0;
}
