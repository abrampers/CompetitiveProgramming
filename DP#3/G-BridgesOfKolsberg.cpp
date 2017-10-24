#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define vi vector<int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second

long long trade[10005][10005];
int bridge[10005][10005];
vector<pair<string, pair<string, long long> > > northCity;
vector<pair<string, pair<string, long long> > > southCity;


long long hasilTrade() {
    int &ret = dp[][];
    if (ret == -1) {
        if (/* condition */) {
            /* code */
        } else {
            /* code */
        }
    }

}

int hasilBridge() {
    int &ret = bridge[][];
    if (ret == -1) {
        if (/* condition */) {
            /* code */
        } else {
            /* code */
        }
    }
}

int main() {
    long long angka;
    int loop, city, n;
    string s, t;
    memset(dp, -1, sizeof dp);
    scanf("%d", &loop);

    for (int i = 0; i < loop; i++) {
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            cin >> s >> t >> angka;
            northCity.pb(mp(s, mp(t, angka)));
        }

        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            cin >> s >> t >> angka;
            southCity.pb(mp(s, mp(t, angka)));
        }

        printf("%d", city());
    }

    return 0;
}
