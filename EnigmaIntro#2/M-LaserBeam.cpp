#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    long long n, m, t;
    scanf("%lld", &t);
    for (long long i = 0; i < t; i++) {
        scanf("%lld %lld", &n, &m);
        n = gcd(n - 1, m - 1);
        printf("%lld\n", n + 1);
    }
    return 0;

}
