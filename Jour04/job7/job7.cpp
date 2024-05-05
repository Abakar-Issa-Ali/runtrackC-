#include <iostream>

int main() {
    // Initialisation d'un tableau statique d'entiers
    int tableau[] = {10, 20, 30, 40, 50};

    for (int i = 0; i < sizeof(tableau) / sizeof(tableau[0]); ++i) {
        std::cout << "Adresse mémoire de tableau[" << i << "] : " << &tableau[i] << ", Valeur : " << tableau[i] << std::endl;
    }

    return 0;
}
