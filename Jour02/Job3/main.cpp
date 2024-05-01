#include <iostream>
using namespace std;

int main() {     // Avec while 
    int i = 0, n, som = 0;

    while (i < 4) {
        cout << "Donnez un entier : ";
        cin >> n;
        som += n;
        i++;
    }

    cout << "Somme : " << som;

    return 0;
}
  //--------------------------------------------------

#include <iostream>
using namespace std;

int main() {    // Avec do while
    int i = 0, n, som = 0;

    do {
        cout << "Donnez un entier : ";
        cin >> n;
        som += n;
        i++;
    } while (i < 4);

    cout << "Somme : " << som;

    return 0;
}