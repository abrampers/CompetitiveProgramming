#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main() {

    int n, q, c, l, r;
    string bitString;

    cin >> n >> q;
    cin >> bitString;

    int bits[n];

    for (int i = 0; i < n; i ++) {
        bits[i] = bitString[i] - 48;

        cout << bits[i] << endl;
    }

    for (int i = 0; i < q; i ++) {
        cin >> c >> l >> r;
        l --;
        r --;

        // flip
        if (c == 1) {

            for (int j = l; j <= r; j ++) {
                if (bits[j] == 0) {
                    bits[j] = 1;
                } else {
                    bits[j] = 0;
                }
            }

            /*
            for (int i = 0; i < n; i ++) {
                cout << bits[i];
            }
            cout << endl;
            */

        // combo
        } else {

            int max = 0;
            int count = 0;
            int cur = !bits[l];
            for (int j = l; j <= r; j ++) {
                if (bits[j] == cur) {
                    count ++;
                } else {
                    if (count > max) {
                        max = count;
                    }
                    count = 1;
                    cur  = bits[j];
                }
                if (j == r) {
                    if (count > max) {
                        max = count;
                    }
                }
            }

            cout << max << endl;

        }
    }

    return 0;
}
