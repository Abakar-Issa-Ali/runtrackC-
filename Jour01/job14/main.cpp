#include <iostream>

int main() {
    int nbr, nbrInverse = 0;
  
    std::cout << "Entrez un nombre : ";
    std::cin >> nbr;

    while (nbr != 0) {
        int chiffre = nbr % 10;
        nbrInverse = nbrInverse * 10 + chiffre;
        nbr /= 10;
    }
    
    std::cout << "Le nbr inversé est : " << nbrInverse << std::endl;

    return 0;
}
