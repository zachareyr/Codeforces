#include <iostream>
using namespace std;

int main(void) {
    // 0: even
    // 1: odd
    int first, second, third, curr, n; cin >> n;
    cin >> curr;
    first = curr % 2;
    cin >> curr;
    second = curr % 2;
    cin >> curr;
    third = curr % 2;

    if (first != second) {
        if (second == third) {
            cout << 1 << endl;
            return 0;
        } else {
            cout << 2 << endl;
            return 0;
        }
    } else if (second != third) {
        cout << 3 << endl;
        return 0;
    }

    for (int i = 3; i < n; i++) {
        cin >> curr;
        curr = curr % 2;
        if (curr != first) {
            cout << i+1 << endl;
            return 0;
        }
    }

    return 0;
}