#include <iostream>
using namespace std;

int main(void) {
    string a, seq = "", res = ""; cin >> a;

    for (int i = 0, n = a.length(); i<n; i++) {
        seq += a.at(i);
        if (seq == ".") {
            res+="0";
            seq = "";
        } else if (seq == "-.") {
            res += "1";
            seq = "";
        } else if (seq == "--") {
            res += "2";
            seq = "";
        }
    }
    cout << res << endl;
    return 0;
}