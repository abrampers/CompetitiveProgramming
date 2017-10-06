#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int max, x, y, a, b, count, i;
    cin >> max >> x >> y >> a >> b;

    // turun
    if ((x > y) && (b != 0)) {
        count = abs((x - y) / b);
        x -= count * b;
    // naik
    } else if (a != 0){
        count = abs((y - x) / a);
        x += count * a;
    }

    // politik
    int pos = x;
    int start = x;
    int dest = y;
    while (pos != dest) {

        if (pos < dest) {
            if ((pos + a) <= max) {
                pos += a;
                count ++;
            } else if ((pos - b) >= 1) {
                pos -= b;
                count ++;
            } else {
                count = -1;
                break;
            }
        } else {
            if ((pos - b) >= 1) {
                pos -= b;
                count ++;
            } else if ((pos + a) <= max) {
                pos += a;
                count ++;
            } else {
                count = -1;
                break;
            }
        }

        if (pos == start) {
            count = -1;
            break;
        }

    }


    if (count == -1) {
        cout << "use the stairs" << endl;
    } else {
        cout << count << endl;
    }


}
