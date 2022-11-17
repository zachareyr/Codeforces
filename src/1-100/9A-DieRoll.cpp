#include <iostream>
using namespace std;

int main(void) {
    int score1, score2, max; cin >> score1; cin >> score2;

    if (score1 > score2) max = score1;
    else max = score2;

    switch(max) {
        case 1: cout << "1/1" << endl; break; 
        case 2: cout << "5/6" << endl; break;
        case 3: cout << "2/3" << endl; break;
        case 4: cout << "1/2" << endl; break;
        case 5: cout << "1/3" << endl; break;
        case 6: cout << "1/6" << endl; break;
    }
    return 0;
}