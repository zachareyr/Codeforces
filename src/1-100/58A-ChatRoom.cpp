#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    string w; cin >> w;
    vector<char> letters = {'h', 'e', 'l', 'l', 'o'};
    int letter = 0;
    for (int i = 0, n = w.length(); i < n; i++) {
        if (w.at(i) == letters[letter]) {
            letter++;
        }
        if (letter == 5) break;
    }
    cout << ((letter == 5) ? "YES" : "NO") << endl;
    return 0;
}