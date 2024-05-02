#include <iostream>
#include <cstring> // Pour utiliser strlen()

const int taille_max = 100; // Taille maximale de la chaîne

int main() {
    char tab[taille_max]; 
    std::cout << "Entrez une chaîne de caractères : ";
    std::cin.getline(tab, taille_max); 

    tab[strlen(tab)] = '\0';

    std::cout << "Tableau de caractères : ";
    for (int i = 0; tab[i] != '\0'; ++i) {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
