#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main() {
    // KAMUS
    int n, a;
    map<int, vector<pair<int, int> > > input;

    // ALGORITMA
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a;
            input[a].push_back(make_pair(i, j));
        }
    }

    int max = -1;
    for (std::map<int, vector<pair<int, int> > >::iterator it=input.begin(); it!=input.end(); ++it) {
        if ((it->second).size() >= 2) {
            for (int i = 0; i < (int) ((it->second).size() - 1); i++) {
                for (int j = (i + 1); j < (int) (it->second).size(); j++) {
                    if ((((it->second)[i].first <= (it->second)[j].first) && ((it->second)[i].second <= (it->second)[j].second)) ||
                    (((it->second)[j].first <= (it->second)[i].first) && ((it->second)[j].second <= (it->second)[i].second))) {
                        max = max < it->first ? it->first : max;
                    }
                }
            }
        }
    }

    cout << max << endl;


    return 0;
}
