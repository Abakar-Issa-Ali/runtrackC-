#include <iostream>
#include <cmath>
#include <iomanip>


int main() {
    double nombre;
  
        std::cout << "Donnez un nombre positif : ";
        std::cin >> nombre;

        if (nombre == 0) {
          return 1;
        }
        if (nombre < 0) {
            std::cout << "svp positif." << std::endl;
        } else{
          double racine_carree = sqrt(nombre);
          std::cout << "La racine carrée de " << nombre << " est : " << std::scientific << std::setprecision(6)<< racine_carree << std::endl;
        }

    return 0;
}
      