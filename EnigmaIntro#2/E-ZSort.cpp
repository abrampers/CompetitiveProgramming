#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

#define pb push_back
#define vi vector<int>

int main() {
    int n, m, a, b, count = 0, i, j;
    vector<int > unsorted;
    vi firstHalf;
    vi secondHalf;
    vi sorted;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        unsorted.pb(a);
    }

    sort(unsorted.begin(), unsorted.end());
    m = ceil((float) n / 2);

    firstHalf.insert(firstHalf.begin(), unsorted.begin(), unsorted.begin()+ m);
    secondHalf.insert(secondHalf.begin(), unsorted.begin() + m, unsorted.end());

    reverse(secondHalf.begin(), secondHalf.end());
    sorted.pb(firstHalf[0]);
    firstHalf.erase(firstHalf.begin());
    i = 0;
    j = 2;
    while (!firstHalf.empty() && !secondHalf.empty()) {
        if (j % 2 == 0) {
            if(sorted[i] <= secondHalf[0]) {
                sorted.pb(secondHalf[0]);
                secondHalf.erase(secondHalf.begin());
                i++;
            }
        } else {
            if(sorted[i] >= firstHalf[0]) {
                sorted.pb(firstHalf[0]);
                firstHalf.erase(firstHalf.begin());
                i++;
            }
        }
        j++;
    }

    if (firstHalf.empty()) {
        while (!secondHalf.empty()) {
            sorted.pb(secondHalf[0]);
            secondHalf.erase(secondHalf.begin());
        }
    } else if (secondHalf.empty()) {
        while (!firstHalf.empty()) {
            sorted.pb(firstHalf[0]);
            firstHalf.erase(firstHalf.begin());
        }
    }

    for (int i = 0; i < sorted.size(); i++) {
        if (i != 0) {
            printf(" ");
        }
        printf("%d", sorted[i]);
    }

    printf("\n");
    return 0;

}
