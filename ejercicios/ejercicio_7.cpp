#include <iostream>

int main() {
    int numero1, numero2;

    // Pedir los numeros por teclado
    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;

    // Comprobar el mayor de los numeros
    if (numero1 > numero2) {
        std::cout << "El numero mayor es: " << numero1 << std::endl;
    } else if (numero2 > numero1) {
        std::cout << "El numero mayor es: " << numero2 << std::endl;
    } else {
        std::cout << "Los numeros son iguales" << std::endl;
    }

    return 0;
}
