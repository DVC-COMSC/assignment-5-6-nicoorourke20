#include <iostream>

int main() {
    int n;
    std::cout << "Enter the size of the rectangle: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j >= i && j < n - 1) {
                std::cout << i << "," << j << std::endl;
            }
        }
    }

    return 0;
}
