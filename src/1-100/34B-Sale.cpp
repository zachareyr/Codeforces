#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, m; cin >> n; cin >> m;
    int price, index = 0;
    vector<int> tvs;
    for (int i = 0; i < n; i++) {
        cin >> price;
        for (int j = 0; j < i; j++) {
            if (tvs.at(j) >= price) index++;
        }
        tvs.insert(tvs.begin() + index, price);
        index = 0;
    }

    int profit = 0;
    for (int i = n - 1; i >= n - m; i--) {
        if (tvs.at(i) > 0) break;
        profit -= tvs.at(i);
    }
    cout << profit << endl;
    return 0;
}