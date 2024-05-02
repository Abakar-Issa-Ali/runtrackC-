#include <iostream>
#include <string>

using namespace std;

int main() {
    string phrase = "vive la plateforme !";
    string nouvellePhrase = "";

    for (char c : phrase) {
    
        if (!(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' ||
              tolower(c) == 'o' || tolower(c) == 'u' || tolower(c) == 'y' )) {
            nouvellePhrase += c;
        }
    }

    cout << nouvellePhrase << endl;

    return 0;
}
