#include <iostream>

int main() {
    int entier = 17;
    float flottant = 3.14f; 
    double reel = 123.345;
    const char* caractere = "La Plateforme"; 

    std::cout << "Adresse mémoire de entier : " << &entier << ", Valeur : " << entier << std::endl;
    std::cout << "Adresse mémoire de flottant : " << &flottant << ", Valeur : " << flottant << std::endl;
    std::cout << "Adresse mémoire de reel : " << &reel << ", Valeur : " << reel << std::endl;
    std::cout << "Adresse mémoire de caractere : " << static_cast<const void*>(&caractere) << ", Valeur : " << caractere << std::endl;

    return 0;
}
