#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define pb push_back
#define vi vector<int>

bool comp(string a, string b) {
    return (a + b) > (b + a);
}

int main() {
    int n;
    string a;
    vector<string> input;
    while (true) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        for (int i = 0; i < n; i++) {
            cin >> a;
            input.pb(a);
        }
        sort(input.begin(), input.end(), comp);
        for (int i = 0; i < n; i++) {
            cout << input[i];
        }
        cout << endl;
        input.clear();
    }
    return 0;
}
