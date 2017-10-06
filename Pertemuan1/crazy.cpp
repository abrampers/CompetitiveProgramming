#include <iostream>
using namespace std;

int main() {

    int n, c;
    int count = 1;
    cin >> n >> c;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++) {
        if ((arr[i] - arr[i - 1]) <= c) {
            count++;
        } else {
            count = 1;
        }
    }
    cout << count << endl;

    return 0;
}
