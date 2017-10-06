#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

int main() {
    string s;
    char c;
    stack<char> rope;

    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        c = s[i];
        if (rope.empty()) {
            rope.push(c);
        } else if (rope.top() == c) {
            rope.pop();
        } else {
            rope.push(c);
        }
    }

    if (rope.empty()) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;

}
