#include <iostream>
#include <string>

int main(void) {
    int n; std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::string w; std::cin >> w;
        int l = w.length();
        if (l <= 10) {
            std::cout << w << std::endl;
            continue;
        }

        std::cout << w.at(0) << l - 2 << w.at(l - 1) << std::endl;
    }
}