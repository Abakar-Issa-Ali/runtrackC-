#include <iostream>
#include <string>

using namespace std;

void trierChaine(string& chaine) {
    // Tri à bulles des caractères de la chaîne
    int taille = chaine.size();
    for (int i = 0; i < taille - 1; ++i) {
        for (int j = 0; j < taille - i - 1; ++j) {
            if (chaine[j] > chaine[j + 1]) {
                char temp = chaine[j];
                chaine[j] = chaine[j + 1];
                chaine[j + 1] = temp;
            }
        }
    }
}
int main() {
    string chaine1, chaine2;
    cout << "Veuillez entrer une chaîne de caractères : ";
    getline(cin, chaine1);

    // Initialise la deuxième chaîne avec "Bonjour"
    chaine2 = "Bonjour";
    trierChaine(chaine1);
    trierChaine(chaine2);
    cout << "Chaîne 1 triée : " << chaine1 << endl;
    cout << "Chaîne 2 triée : " << chaine2 << endl;

    return 0;
}
