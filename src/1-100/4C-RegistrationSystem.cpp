#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    vector<string> names;
    vector<int> amounts;
    int n, namecount = 0; cin >> n;
    string name;
    bool namefound = false;
    for (int i = 0; i < n; i++) {
        cin >> name;
        for (int j = 0; j < namecount; j++) {
            if (name == names[j]) {
                cout << name << amounts[j] << endl;
                amounts[j]++;
                namefound = true;
            }
        }
        if (namefound) {
            namefound = false;
            continue;
        }
        names.push_back(name);
        amounts.push_back(1);
        namecount++;
        cout << "OK" << endl;
    }
    return 0;
}