#include <iostream>

int main() {
    const int taille = 10;
    int T[taille];
    int nombre = 0;

    std::cout << "Veuillez saisir 10 entiers :\n";
    for (int i = 0; i < taille; ++i) {
        std::cout << "Entier " << i + 1 << " : ";
        std::cin >> T[i];
    }
  
    for (int i = 0; i < taille; ++i) {
        if (T[i] >= 5) {
            nombre++;
        }
    }
    std::cout << "Le nombre d'entiers supérieurs ou égaux à 5 est : " << nombre << std::endl;

    return 0;
}
