#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

#define vi vector<int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second

bool cmp(pair<int,int> a, pair<int,int> b) {
    return (a.se > b.se);
}

int main() {
    long long n, m, a, b, count = 0;
    vector<pair<int,int> > input;

    scanf("%lld %lld", &n, &m);
    for (int i = 0; i < m; i++) {
        scanf("%lld %lld", &a, &b);
        input.pb(mp(a,b));
    }
    sort(input.begin(), input.end(), cmp);

    long long i = 0;
    while ((n > 0) && (i < m)) {
        if(input[i].fi <= n) {
            count += input[i].se * input[i].fi;
            n -= input[i].fi;
            i++;
        } else {
            count += input[i].se * n;
            n = 0;
        }
    }


    printf("%lld\n", count);

    input.clear();
    count = 0;

    return 0;

}
