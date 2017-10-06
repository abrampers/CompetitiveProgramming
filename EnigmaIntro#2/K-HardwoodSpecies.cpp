#include <cstdio>
#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second

int main() {
    int n, countTree = 0;
    string s, c;
    map<string, int> tree;

    scanf("%d\n",&n);

    for (int i = 0; i < n; i++) {
        while(getline(cin, s)) {
            if (s == "") break;
            else {
                if (tree.count(s) > 0) {
                    tree[s]++;
                } else {
                    tree[s] = 1;
                }
                countTree++;
            }
        }

        for (map<string,int>::iterator it=tree.begin(); it!=tree.end(); ++it) {
            cout << it->first << " " << fixed << setprecision(4) << (float) it->second / countTree * 100 << endl;
        }

        if (i != n - 1) {
            cout << endl;
        }

        countTree = 0;
        tree.clear();
    }
}
