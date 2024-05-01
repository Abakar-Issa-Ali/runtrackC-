#include <iostream>

// Fonction pour calculer la factorielle d'un nombre entier n
unsigned long long factorielle(int n) {
    unsigned long long resultat = 1;
    for (int i = 1; i <= n; ++i) {
        resultat *= i;
    }
    return resultat;
}

int main() {
    int nbr;
    std::cout << "Donnez un nombre entier : ";
    std::cin >> nbr;

    if (nbr < 0) {
        std::cout << "Le nombre doit être un entier positif ou nul." << std::endl;
        return 1; 
    }
    std::cout << nbr << "! = " << factorielle(nbr) << std::endl;

    return 0;
}
