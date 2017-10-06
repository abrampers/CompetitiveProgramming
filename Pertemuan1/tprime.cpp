
#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {

        int count = 0;
        int a;

        cin >> a;

        for (int j = 1; j * j < a; j--) {
            if (a % j == 0) count++;
        }

        if (count == 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }


    }



    return 0;
}
