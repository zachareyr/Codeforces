#include <iostream>

int main(void) {
    int w; std::cin >> w;
    std::cout << ((w > 2 && w % 2 == 0) ? "YES" : "NO") << std::endl;
    return 0;
}