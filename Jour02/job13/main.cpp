#include <iostream>
#include <iomanip>

int main() {
    
    std::cout << std::setw(4) << "" << std::setw(4) << "I";   // Affichage de la première ligne avec les entêtes
    for (int i = 1; i <= 10; ++i) {
        std::cout << std::setw(4) << i;
    }
    std::cout << std::endl;

    for (int i = 0; i <= 11; ++i) {   // Affichage de la ligne séparatrice
        std::cout << "----";
    }
    std::cout << std::endl;
  
    for (int i = 1; i <= 10; ++i) {
        
        std::cout << std::setw(4) << i << std::setw(4) << "I";
        for (int j = 1; j <= 10; ++j) {
            std::cout << std::setw(4) << i * j;
        }
        std::cout << std::endl;
    }

    return 0;
}
