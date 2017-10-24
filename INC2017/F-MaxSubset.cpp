#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int n, a, k;
int ar[100005];

bool valid(int a) {
    int count = 1;
    int pivot = ar[0];
    for (int i = 1; i < n; i++) {
        if (ar[i] - pivot >= a) {
            count++;
            pivot = ar[i];
        }
    }
    return count >= k;
}

int main() {
    FAST_IO;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    sort(ar, ar+n);

    int kiri = 0;
    int kanan = ar [n - 1];
    int temp;

    while (kiri <= kanan) {
        int mid = (kiri + kanan) / 2;
        if (valid(mid)) {
            temp = mid;
            kiri = mid + 1;
            if (!valid(mid + 1)) {
                break;
            }
        } else {
            kanan = mid - 1;
        }
    }

    cout <<  temp << endl;


    //
    // int j = k - 2;
    // int closest;
    // float x = (array[n - 1] - array[0]) / (k - 1);
    // for (int i = 0; i <= k - 1; i++) {
    //     a = i * x + array[0];
    //     closest = getClosestK(array, a);
    //     subset.push_back(closest);
    // }
    //
    // int min = 999999;
    // int temp;
    //
    // for (int i = 0; i < k - 1; i++) {
    //     temp = subset[i + 1] - subset[i];
    //     if (temp < min) {
    //         min = temp;
    //     }
    // }
    //
    // for (size_t i = 0; i < subset.size(); i++) {
    //     cout << subset[i] << endl;
    // }

}
