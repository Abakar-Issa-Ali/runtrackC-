#include <iostream>

int main() {
    //  variables contenant des entiers
    int a = 10;
    int b = 20;
    int c = 30;

    // Des pointeurs pointant vers les trois variables
    int* ptrA = &a;
    int* ptrB = &b;
    int* ptrC = &c;

    // Accès aux valeurs des variables via les pointeurs
    std::cout << "Valeur de la variable a : " << *ptrA << std::endl;
    std::cout << "Valeur de la variable b : " << *ptrB << std::endl;
    std::cout << "Valeur de la variable c : " << *ptrC << std::endl;

    // Modification des valeurs pointées par les pointeurs
    *ptrA = 15;
    *ptrB = 25;
    *ptrC = 35;

    // Affichage des nouvelles valeurs des variables
    std::cout << "Nouvelle valeur de la variable a : " << a << std::endl;
    std::cout << "Nouvelle valeur de la variable b : " << b << std::endl;
    std::cout << "Nouvelle valeur de la variable c : " << c << std::endl;

    return 0;
}
