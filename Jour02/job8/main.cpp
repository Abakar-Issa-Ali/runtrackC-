#include <iostream>

int main() {
    int a, b;

    std::cout << "Entrez la borne inferieure a : ";
    std::cin >> a;

    std::cout << "Entrez la borne superieure b : ";
    std::cin >> b;

    int nbr = a;
    std::cout << "Les entiers de " << a << " à " << b << " sont : ";
    while (nbr <= b) {
        std::cout << nbr << " ";
        nbr++;
    }
    std::cout << std::endl;

    return 0;
}
