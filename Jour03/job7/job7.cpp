  #include <iostream>

  int main() {
      const int taille = 10;
      int T[taille];

      std::cout << "Veuillez saisir 10 entiers :\n";
      for (int i = 0; i < taille; ++i) {
          std::cout << "Entier " << i + 1 << " : ";
          std::cin >> T[i];
      }

      int indice_max = 0;
      for (int i = 1; i < taille; ++i) {
          if (T[i] > T[indice_max]) {
              indice_max = i;
          }
      }
      std::cout << "L'indice du plus grand élément est : " << indice_max << std::endl;

      return 0;
  }
