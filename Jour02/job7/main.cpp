#include <iostream>

int main() {
    int a, b;
    std::cout << "Entrez la borne infèrieure a : ";
    std::cin >> a;

    std::cout << "Entrez la borne supérieure b : ";
    std::cin >> b;
    std::cout << "Les entiers de " << a << " à " << b << " sont : ";
    for (int i = a; i <= b; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
