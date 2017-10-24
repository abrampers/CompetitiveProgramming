#include <bits/stdc++.h>
using namespace std;

int n;
int arr[305][305];
vector<pair<int, int> > a[100005];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            a[arr[i][j]].push_back(make_pair(i, j));
        }
    }

    


    return 0;
}
