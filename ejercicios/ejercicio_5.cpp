#include <iostream>

int main() {
    int numero;

    // Pedir el número por teclado
    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    // Comprobar si el número es par o impar
    if (numero % 2 == 0) {
        std::cout << "El numero es par" << std::endl;
    } else {
        std::cout << "El numero es impar" << std::endl;
    }

    return 0;
}
