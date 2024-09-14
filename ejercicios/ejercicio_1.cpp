#include <iostream>

int main() {
    int num1, num2;

    // Pedir los numeros por teclado
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

    // Comprobar cual es el mayor
    if (num1 > num2) {
        std::cout << "El mayor es: " << num1 << std::endl;
    } else if (num2 > num1) {
        std::cout << "El mayor es: " << num2 << std::endl;
    } else {
        std::cout << "Los numeros son iguales" << std::endl;
    }

    return 0;
}
