#include <iostream>

int main() {
    int numero;

    // Pedir el número por teclado
    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    // Comprobar si el número es múltiplo de 3
    if (numero % 3 == 0) {
        std::cout << "El número es multiplo de 3" << std::endl;
    } else {
        std::cout << "El número no es multiplo de 3" << std::endl;
    }

    return 0;
}
