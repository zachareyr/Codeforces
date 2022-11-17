#include <iostream>
using namespace std;

int main(void) {
    int n, s1 = 0, s2 = 0; cin >> n;
    string t1 = "", t2 = "", team;
    for (int i = 0; i < n; i++) {
        cin >> team;
        
        if (t1 == team) s1++;
        else if (t2 == team) s2++;
        else {
            if (t1 == "") {
                t1 = team;
                s1++;
            } else {
                t2 = team;
                s2++;
            }
        }
    }
    cout << ((s1 > s2) ? t1 : t2) << endl;
    return 0;
}