#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Initialise le générateur de nombres aléatoires

    const int min = 0;
    const int max = 100;
    const int chance_max = 7;
    int nombreMystere = rand() % (max - min + 1) + min;
    int tentative;
    int chancesRestantes = chance_max;

    std::cout << "Vous devez deviner un nombre entre " << min << " et " << max << "." << std::endl;
    std::cout << "Vous avez " << chance_max << " chances pour trouver le nombre mystere." << std::endl;

    do {
        std::cout << "Il vous reste " << chancesRestantes << " chances. Entrez votre proposition : ";
        std::cin >> tentative;

        if (tentative < nombreMystere) {
            std::cout << "Trop petit !" << std::endl;
        } else if (tentative > nombreMystere) {
            std::cout << "Trop grand !" << std::endl;
        } else {
            std::cout << "Bravo ! Vous avez trouvé le nombre mystere : " << nombreMystere << std::endl;
            return 0;
        }

        chancesRestantes--;
    } while (chancesRestantes > 0);

    std::cout << "Desole, vous avez epuise toutes vos chances. Le nombre mystere etait : " << nombreMystere << std::endl;
    return 0;
}
