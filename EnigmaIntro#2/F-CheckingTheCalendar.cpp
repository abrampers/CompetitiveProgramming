#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <map>
using namespace std;

#define pb push_back
#define mp make_pair
#define fi first
#define se second

int main() {
    pair<int, int> intDay;
    int i31, i30, i28;
    pair<string, string> inputDay;
    map<string, int> day;

    day["monday"] = 1;
    day["tuesday"] = 2;
    day["wednesday"] = 3;
    day["thursday"] = 4;
    day["friday"] = 5;
    day["saturday"] = 6;
    day["sunday"] = 0;

    cin >> inputDay.fi >> inputDay.se;

    intDay.fi = day[inputDay.fi];
    intDay.se = day[inputDay.se];

    i31 = (intDay.fi + (31 % 7)) % 7;
    i30 = (intDay.fi + (30 % 7)) % 7;
    i28 = (intDay.fi + (28 % 7)) % 7;

    if ((intDay.se != i31) && (intDay.se != i30) && (intDay.se != i28)) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;

}
