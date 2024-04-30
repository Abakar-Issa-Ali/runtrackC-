#include <iostream>

int main() {
    int n, m;

    std::cout << "Entrez la valeur de n : ";
    std::cin >> n;

    std::cout << "Entrez la valeur de m : ";
    std::cin >> m;

    std::cout << "Avant l'échange : n = " << n << ", m = " << m << std::endl;

    int temp = n;
    n = m;
    m = temp;
    
    std::cout << "Apres l'échange : n = " << n << ", m = " << m << std::endl;

    return 0;
}
