#include <iostream>
#include <cstring>

bool est_incluse(const char* chaine1, const char* chaine2) {
    return (strstr(chaine2, chaine1) != nullptr);  // fonction strstr pour rechercher chaine1 dans chaine2
}

int main() {
    const int MAX_TAILLE = 100; // Taille maximale des chaînes
    char chaine1[MAX_TAILLE];
    char chaine2[MAX_TAILLE];
    std::cout << "Entrez la première chaîne de caractères : ";
    std::cin.getline(chaine1, MAX_TAILLE);
    std::cout << "Entrez la deuxième chaîne de caractères : ";
    std::cin.getline(chaine2, MAX_TAILLE);

    if (est_incluse(chaine1, chaine2)) {
        std::cout << "La première chaîne est incluse dans la deuxième." << std::endl;
    } else {
        std::cout << "La première chaîne n'est pas incluse dans la deuxième." << std::endl;
    }

    return 0;
}
