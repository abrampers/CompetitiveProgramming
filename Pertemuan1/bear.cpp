#include <iostream>
using namespace std;

int main() {

    int lim, bob;
    int count = 0;

    cin >> lim >> bob;

    while (lim <= bob) {
        lim *= 3;
        bob *= 2;
        count++;
    }

    cout << count << endl;


    return 0;
}
