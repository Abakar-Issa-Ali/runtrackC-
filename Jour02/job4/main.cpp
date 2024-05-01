#include <iostream>

int main() {
    char operateur;
    double nombre1, nombre2, resultat;

    std::cout << "Entrez un operateur (+, -, *, /) : ";
    std::cin >> operateur;

    std::cout << "Entrez deux nombres : ";
    std::cin >> nombre1 >> nombre2;

    if (operateur == '+') {
        resultat = nombre1 + nombre2;
    } else if (operateur == '-') {
        resultat = nombre1 - nombre2;
    } else if (operateur == '*') {
        resultat = nombre1 * nombre2;
    } else if (operateur == '/') {
        if (nombre2 != 0) {
            resultat = nombre1 / nombre2;
        } else {
            std::cout << "Erreur : Division par zero !" << std::endl;
            return 1; 
        }
    } else {
        std::cout << "Erreur : Operateur invalide !" << std::endl;
        return 1; 
    }
    std::cout << "Le resultat de l'operation est : " << resultat << std::endl;

    return 0;
}
