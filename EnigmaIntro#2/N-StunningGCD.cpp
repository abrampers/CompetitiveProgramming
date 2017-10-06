#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    long long unsigned a, b, t, temp;
    string n, m;

    cin >> t;
    for (long long unsigned i = 0; i < t; i++) {
        cin >> n >> a >> b;
        temp = gcd(a,b);
        for (long long unsigned i = 0; i < temp; i++) {
            cout << n;
        }
        cout << endl;
    }

    return 0;
}
