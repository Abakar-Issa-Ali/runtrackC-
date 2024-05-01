#include <iostream>

int main() {
    int N;
    std::cout << "Entrez un entier N : ";
    std::cin >> N;

    for (int i = 1; i <= N; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << i << " est un multiple de 3 et de 5" << std::endl;
        } else if (i % 3 == 0) {
            std::cout << i << " est un multiple de 3" << std::endl;
        } else if (i % 5 == 0) {
            std::cout << i << " est un multiple de 5" << std::endl;
        }
    }

    return 0;
}
