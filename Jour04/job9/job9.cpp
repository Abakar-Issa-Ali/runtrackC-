#include <iostream>
#include <vector>

int main() {
    
    int taille;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> taille;

    // Création d'un vector dynamique d'entiers de taille définie par le user
    std::vector<int> tableau(taille);
    std::cout << "La taille du tableau est : "  <<  taille << std::endl;

    std::cout << "Entrez les valeurs du tableau :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cin >> tableau[i];
    }

    std::cout << "Contenu du tableau :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cout << tableau[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
