#include <iostream>

using namespace std;

int main(void) {
    string s; cin >> s;
    char prev = s.at(0), curr;
    int row = 1;
    for (int i = 1, n = s.length(); i < n; i++) {
        curr = s.at(i);
        if (curr == prev) {
            row++;
            if (row == 6) {
                cout << "YES" << endl;
                return 0;
            }
        }
        else row = 0;
        prev = curr;
    }
    cout << "NO" << endl;
    return 0;
}