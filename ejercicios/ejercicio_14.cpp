#include <iostream>

int main() {
    int num1, num2, num3;

    // Pedir los tres numeros por teclado
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;
    std::cout << "Ingrese el tercer numero: ";
    std::cin >> num3;

    // Verificar si los tres numeros son iguales
    if (num1 == num2 && num2 == num3) {
        std::cout << "Los tres numeros son iguales entre si." << std::endl;
    }

    return 0;
}
