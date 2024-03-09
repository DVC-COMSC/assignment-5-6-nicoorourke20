#include <iostream>

int main() {
    int n;
    std::cout << "Enter the size of the rectangle: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            std::cout << i << "," << j << std::endl;
        }
    }
    return 0;
}
