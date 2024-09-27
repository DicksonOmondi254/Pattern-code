#include <iostream>

void printPattern(int n) {
    for (int i = n; i > 0; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n = 5; // The highest number in the pattern
    printPattern(n);
    return 0;
}
