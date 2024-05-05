#include <iostream>

int main() {

    int number = 2019;

    int *ptr = &number;

    std::cout << "la valeur de 'number' est : " << *ptr << std::endl;

    return 0;
}
