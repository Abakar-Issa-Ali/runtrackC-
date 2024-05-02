#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string heure;

    cout << "Entrez une heure au format XXhXX : ";
    cin >> heure;

    regex formatHeure("([01]?[0-9]|2[0-3])h[0-5][0-9]"); // l'expression régulière pour valider l'heure

    if (regex_match(heure, formatHeure)) {
        cout << "Format d'heure valide." << endl;
    } else {
        cout << "Format d'heure invalide. Utilisez le format XXhXX." << endl;
    }

    return 0;
}