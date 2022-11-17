#include <iostream>
using namespace std;

int main(void) {
    string a, b, res = ""; cin >> a; cin >> b;
    for (int i = 0, n = a.length(); i < n; i++) {
        if (a.at(i) != b.at(i)) res += "1";
        else res += "0";
    }
    cout << res << endl;
    return 0;
}