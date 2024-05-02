#include <iostream>

int sommeElementsPairs(int tableau[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; ++i) {
        if (tableau[i] % 2 == 0) { 
            somme += tableau[i]; 
        }
    }
    return somme;
}

int main() {
    const int taille = 5; // Taille du tableau
    int tableau[taille];

  
    std::cout << "Veuillez entrer " << taille << " entiers :\n";
    for (int i = 0; i < taille; ++i) {
        std::cout << "Element " << i + 1 << " : ";
        std::cin >> tableau[i];
    }

    int somme_pairs = sommeElementsPairs(tableau, taille);
    std::cout << "La somme des éléments pairs du tableau est : " << somme_pairs << std::endl;

    return 0;
}
