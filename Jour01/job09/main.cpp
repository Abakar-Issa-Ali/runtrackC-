#include <iostream>

int main() {
    int nbr1, nbr2, nbr3;

    std::cout << "Entrez le premier nbr : ";
    std::cin >> nbr1;

    std::cout << "Entrez le deuxième nbr : ";
    std::cin >> nbr2;

    std::cout << "Entrez le troisième nbr : ";
    std::cin >> nbr3;

    
    int plusGrand = nbr1;
    if (nbr2 > plusGrand) {
        plusGrand = nbr2;
    }
    if (nbr3 > plusGrand) {
        plusGrand = nbr3;
    }

    std::cout << "Le plus grand des trois nbrs est : " << plusGrand << std::endl;

    return 0;
}
