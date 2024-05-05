#include <iostream>
#include <cstring> // Pour utiliser strlen

void reverser(char* str) {
    int length = strlen(str);
    char* debut = str;
    char* fin = str + length - 1;

    while (debut < fin) {
        char temp = *debut;
        *debut = *fin;
        *fin = temp;
        debut++;
        fin--;
    }
}

int main() {
    const int TAILLE_MAX = 100;
    char input[TAILLE_MAX];
    std::cout << "Entrez une chaine de caracteres : ";
    std::cin.getline(input, TAILLE_MAX);

    reverser(input);

    std::cout << "Chaine inversee : " << input << std::endl;

    return 0;
}
