#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pf push_front
#define pb push_back
#define mp make_pair
#define fi first
#define se second

int main() {
    FAST_IO;
    int n, line = 1, a, b, i;
    vector<pair<int, int> > domino;
    deque<int> dominoLine;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        domino.pb(mp(a, b));
    }

    i = 0;
    while (!domino.empty()) {
        if (i > n) {
            line++;
            dominoLine.clear();
            i = 0;
            n = domino.size();
        } else if (dominoLine.empty()) {
            dominoLine.pb(domino[i].fi);
            dominoLine.pb(domino[i].se);
            domino.erase(domino.begin() + i);
            n--;
        } else {
            if (domino[i].fi == dominoLine.front()) {
                dominoLine.pf(domino[i].se);
                domino.erase(domino.begin() + i);
                n--;
            } else if (domino[i].fi == dominoLine.back()) {
                dominoLine.pb(domino[i].se);
                domino.erase(domino.begin() + i);
                n--;
            } else if (domino[i].se == dominoLine.front()) {
                dominoLine.pf(domino[i].fi);
                domino.erase(domino.begin() + i);
                n--;
            } else if (domino[i].se == dominoLine.back()) {
                dominoLine.pb(domino[i].fi);
                domino.erase(domino.begin() + i);
                n--;
            } else {
                i++;
            }

        }

    }

    cout << line << endl;

}
