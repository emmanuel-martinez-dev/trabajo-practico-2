#include <iostream>

int main() {
    int num1, num2, num3;
    double promedio;

    // Pedir los numeros por teclado
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;
    std::cout << "Ingrese el tercer numero: ";
    std::cin >> num3;

    // Calcular el promedio
    promedio = (num1 + num2 + num3) / 3.0;

    // Comprobar si el promedio es positivo, negativo o cero
    if (promedio > 0) {
        std::cout << "El promedio es positivo" << std::endl;
    } else if (promedio < 0) {
        std::cout << "El promedio es negativo" << std::endl;
    } else {
        std::cout << "El promedio es cero" << std::endl;
    }

    return 0;
}
