#include <iostream>

using namespace std;

void fusionnerTableaux(int tableau1[], int taille1, int tableau2[], int taille2, int tableauFusionne[]) {
    int i = 0, j = 0, k = 0;

    while (i < taille1 && j < taille2) {
        if (tableau1[i] < tableau2[j]) {
            tableauFusionne[k++] = tableau1[i++];
        } else {
            tableauFusionne[k++] = tableau2[j++];
        }
    }

    while (i < taille1) {
        tableauFusionne[k++] = tableau1[i++];
    }

    while (j < taille2) {
        tableauFusionne[k++] = tableau2[j++];
    }
}

int main() {
    const int taille1 = 5;
    const int taille2 = 4;
    int tableau1[taille1] = {1, 3, 5, 7, 9};
    int tableau2[taille2] = {2, 4, 6, 8};
    int tableauFusionne[taille1 + taille2];

    fusionnerTableaux(tableau1, taille1, tableau2, taille2, tableauFusionne);

    
    cout << "Tableau fusionne : ";
    for (int i = 0; i < taille1 + taille2; ++i) {
        cout << tableauFusionne[i] << " ";
    }
    cout << endl;

    return 0;
}
