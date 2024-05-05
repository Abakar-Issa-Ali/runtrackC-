#include <iostream>

// Déclaration de la structure Point
struct Point {
    int x;
    int y;
};

int main() {

    Point point;
    point.x = 5;
    point.y = 10;

    Point* ptrPoint = &point;

    ptrPoint->x = 20;
    ptrPoint->y = 30;

    std::cout << "Nouvelle valeur de x : " << point.x << std::endl;
    std::cout << "Nouvelle valeur de y : " << point.y << std::endl;

    return 0;
}
