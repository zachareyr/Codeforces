#include <iostream>

using namespace std;

int main(void) {
    unsigned long long n, m, a; cin >> n; cin >> m; cin >> a;
    unsigned long long rows = n / a;
    if (n % a != 0) rows++;
    
    unsigned long long cols = m / a;
    if (m % a != 0) cols++;

    unsigned long long total = rows * cols;
    cout << total << endl;
}