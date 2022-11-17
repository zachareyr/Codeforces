#include <iostream>
using namespace std;

int main(void) {
    string w1, w2; cin >> w1; cin >> w2;
    int l2 = w2.length();
    if (w1.length() != w2.length()) {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0, n = w1.length(); i < n; i++) {
        if (w1.at(i) != w2.at(l2 - 1 - i)) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}