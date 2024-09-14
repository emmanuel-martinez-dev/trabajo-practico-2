#include <iostream>

int main() {
    int numero;

    // Pedir el número por teclado
    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    // Comprobar si el número es positivo, negativo o cero
    if (numero > 0) {
        std::cout << "El numero es positivo" << std::endl;
    } else if (numero < 0) {
        std::cout << "El numero es negativo" << std::endl;
    } else {
        std::cout << "El numero es cero" << std::endl;
    }

    return 0;
}
