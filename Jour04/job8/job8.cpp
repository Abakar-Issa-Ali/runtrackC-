#include <iostream>
#include <variant>
#include <string>

int main() {
    std::variant<int, std::string, double, const char*> tableau[] = {2019, "La Plateforme", 3.14, "Étudiants"};

    for (size_t i = 0; i < sizeof(tableau) / sizeof(tableau[0]); ++i) {
        std::cout << "Adresse mémoire de tableau[" << i << "] : " << &tableau[i] << ", Valeur : ";

        // Utilisation de std::visit pour accéder à la valeur de chaque élément du tableau
        std::visit([](auto&& arg) {
            std::cout << arg;
        }, tableau[i]);

        std::cout << std::endl;
    }

    return 0;
}
