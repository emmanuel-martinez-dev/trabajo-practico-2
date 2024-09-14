#include <iostream>

int main() {
    int num1, num2, num3;

    // Pedir los tres números por teclado
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;
    std::cout << "Ingrese el tercer número: ";
    std::cin >> num3;

    // Ordenar los números de menor a mayor
    int menor, medio, mayor;
    if (num1 <= num2 && num1 <= num3) {
        menor = num1;
        if (num2 <= num3) {
            medio = num2;
            mayor = num3;
        } else {
            medio = num3;
            mayor = num2;
        }
    } else if (num2 <= num1 && num2 <= num3) {
        menor = num2;
        if (num1 <= num3) {
            medio = num1;
            mayor = num3;
        } else {
            medio = num3;
            mayor = num1;
        }
    } else {
        menor = num3;
        if (num1 <= num2) {
            medio = num1;
            mayor = num2;
        } else {
            medio = num2;
            mayor = num1;
        }
    }

    // Mostrar los números ordenados
    std::cout << "Los números ordenados de menor a mayor son: " << menor << ", " << medio << ", " << mayor << std::endl;

    return 0;
}
