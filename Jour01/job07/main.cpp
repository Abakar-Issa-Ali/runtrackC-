#include <iostream>

int main() {
    int nbr;

    std::cout << "Entrez un nombre entier : ";
    std::cin >> nbr;

    if (nbr % 2 == 0) {
        std::cout << nbr << " est pair." << std::endl;
    } else {
        std::cout << nbr << " est impair." << std::endl;
    }

    return 0;
}
