#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int n, a;
    string s;
    vector<string> input;
    vector<string> query;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        input.push_back(s);
    }

    cin >> a;
    for(int i = 0; i < a; i++) {
        cin >> s;
        int count = 0;
        for (int j = 0; j < n; j++) {
            if(s == input[j]) {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
