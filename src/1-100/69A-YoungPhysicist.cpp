#include <iostream>

using namespace std;

int main(void) {
    int n, fx, fy, fz, nfx = 0, nfy = 0, nfz = 0; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> fx;
        cin >> fy;
        cin >> fz;
        nfx += fx; nfy += fy; nfz += fz;
    }
    cout << ((nfx != 0 || nfy != 0 || nfz != 0) ? "NO" : "YES") << endl;
    return 0;
}