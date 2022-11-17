#include <iostream>
using namespace std;

bool is_prime(int n);

int main(void) {
    int n, m; cin >> n; cin >> m;
    if (!is_prime(m)) {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = n+1; i < m; i++) {
        if (is_prime(i)) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}

bool is_prime(int n) {
    for (int i = 2; i < n/2 + 1; i++) {
        if (n % i == 0) return false;
    }
    return true;
}