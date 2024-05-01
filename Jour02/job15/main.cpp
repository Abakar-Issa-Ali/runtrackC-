#include <iostream>

void Fibonacci(int limit) {
    int num1 = 0, num2 = 1, nextTerm = 0;

    std::cout << "Suite de Fibonacci jusqu'à " << limit << " : ";

    while (nextTerm <= limit) {
        std::cout << num1 << " ";
        int temp = num1 + num2;
        num1 = num2;
        num2 = temp;
        nextTerm = num1;
    }
    std::cout << std::endl;
}

int main() {
    int limit;

    std::cout << "Entrez la limite pour la suite de Fibonacci : ";
    std::cin >> limit;

    Fibonacci(limit);

    return 0;
}
