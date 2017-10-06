#include <bits/stdc++.h>

using namespace std;
int main() {
    int n, a;
    int d;
    cin >> n >> d;
    queue<int> input;
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a;
       input.push(a);
    }
    for (int i = 0; i < d; i++) {
        a = input.front();
        input.pop();
        input.push(a);
    }

    while(!input.empty()) {
        cout << input.front() << " ";
        input.pop();
    }

    cout << endl;

    return 0;
}
