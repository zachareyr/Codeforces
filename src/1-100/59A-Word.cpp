#include <iostream>
using namespace std;

int main(void) {
    string w; cin >> w;
    string upper, lower;
    int ucount = 0, lcount = 0;
    for (int i = 0, n = w.length(); i < n; i++) {
        char curr = (char) w.at(i);
        if (curr >= 'a' && curr <= 'z') {
            lcount++;
            lower += (curr);
            upper += (curr - 32);
        } else {
            ucount++;
            upper += (curr);
            lower += (curr + 32);
        }
    }
    cout << ((ucount > lcount) ? upper : lower) << endl;
    return 0;
}