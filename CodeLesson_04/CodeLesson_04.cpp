#include <iostream>

const int N = 20;

void printNumbers(bool even, int N) {
    std::cout << "Numbers: ";
    for (int i = 0; i <= N; i++) {
        if ((i % 2 == 0 && even) || (i % 2 != 0 && !even)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "Even numbers from 0 to " << N << ": ";
    for (int i = 0; i <= N; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "Odd numbers from 0 to " << N << ": ";
    for (int i = 1; i <= N; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    printNumbers(true, N);

    printNumbers(false, N);

    return 0;
}