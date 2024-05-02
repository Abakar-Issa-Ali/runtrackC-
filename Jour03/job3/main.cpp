#include <iostream>
#include <string>

using namespace std;

int main() {
    string chaine1 = "";
    string chaine2 = "";
    cout<<"Entrez la première chaine de caractère : ";
    cin>>chaine1;
    cout<<"Entrez la deuxième chaine de caractère : ";
    cin>>chaine2;

     if (chaine1 == chaine2) {
        cout << "Les deux chaines sont identiques." << endl;
    }else{
        cout << "Les deux chaines sont différentes." << endl;
    }
    return 0;
}
