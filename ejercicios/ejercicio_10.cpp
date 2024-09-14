#include <iostream>

int main() {
    int num1, num2;
    int diferencia;

    // Pedir los numeros por teclado
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

    // Calcular la diferencia entre el mayor y el menor
    if (num1 > num2) {
        diferencia = num1 - num2;
    } else if (num2 > num1) {
        diferencia = num2 - num1;
    } else {
        diferencia = 0;
    }

    // Mostrar la diferencia por pantalla
    std::cout << "La diferencia entre el mayor y el menor es: " << diferencia << std::endl;

    return 0;
}
