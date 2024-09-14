#include <iostream>

int main() {
    int x, y;

    // Pedir las coordenadas X e Y por teclado
    std::cout << "Ingrese la coordenada X: ";
    std::cin >> x;
    std::cout << "Ingrese la coordenada Y: ";
    std::cin >> y;

    // Comprobar el cuadrante de ubicación del punto
    if (x > 0 && y > 0) {
        std::cout << "El punto se encuentra en el cuadrante I" << std::endl;
    } else if (x < 0 && y > 0) {
        std::cout << "El punto se encuentra en el cuadrante II" << std::endl;
    } else if (x < 0 && y < 0) {
        std::cout << "El punto se encuentra en el cuadrante III" << std::endl;
    } else if (x > 0 && y < 0) {
        std::cout << "El punto se encuentra en el cuadrante IV" << std::endl;
    } else if (x == 0 && y == 0) {
        std::cout << "El punto se encuentra en el origen" << std::endl;
    } else if (x == 0) {
        std::cout << "El punto se encuentra en el eje Y" << std::endl;
    } else if (y == 0) {
        std::cout << "El punto se encuentra en el eje X" << std::endl;
    }

    return 0;
}
