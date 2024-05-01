#include <iostream>

int main() {
    int n;
do {
        std::cout << "Donnez un nombre strictement positif : ";
        std::cin >> n;
    } while (n <= 0);
}