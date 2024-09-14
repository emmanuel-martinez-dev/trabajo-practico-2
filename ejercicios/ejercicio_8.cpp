#include <iostream>

int main() {
    int numero1, numero2, numero3, numero4;
    int mayor, segundoMayor;

    // Pedir los numeros por teclado
    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;
    std::cout << "Ingrese el tercer numero: ";
    std::cin >> numero3;
    std::cout << "Ingrese el cuarto numero: ";
    std::cin >> numero4;

    // Comprobar el mayor y el segundo mayor de los numeros
    if (numero1 > numero2 && numero1 > numero3 && numero1 > numero4) {
        mayor = numero1;
        if (numero2 > numero3 && numero2 > numero4) {
            segundoMayor = numero2;
        } else if (numero3 > numero2 && numero3 > numero4) {
            segundoMayor = numero3;
        } else {
            segundoMayor = numero4;
        }
    } else if (numero2 > numero1 && numero2 > numero3 && numero2 > numero4) {
        mayor = numero2;
        if (numero1 > numero3 && numero1 > numero4) {
            segundoMayor = numero1;
        } else if (numero3 > numero1 && numero3 > numero4) {
            segundoMayor = numero3;
        } else {
            segundoMayor = numero4;
        }
    } else if (numero3 > numero1 && numero3 > numero2 && numero3 > numero4) {
        mayor = numero3;
        if (numero1 > numero2 && numero1 > numero4) {
            segundoMayor = numero1;
        } else if (numero2 > numero1 && numero2 > numero4) {
            segundoMayor = numero2;
        } else {
            segundoMayor = numero4;
        }
    } else {
        mayor = numero4;
        if (numero1 > numero2 && numero1 > numero3) {
            segundoMayor = numero1;
        } else if (numero2 > numero1 && numero2 > numero3) {
            segundoMayor = numero2;
        } else {
            segundoMayor = numero3;
        }
    }

    // Mostrar el mayor y el segundo mayor por pantalla
    std::cout << "El numero mayor es: " << mayor << std::endl;
    std::cout << "El segundo numero mayor es: " << segundoMayor << std::endl;

    return 0;
}
