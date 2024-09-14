#include <iostream>

int main() {
    int numeros[4];
    int menor, segundoMenor;

    // Pedir los numeros por teclado
    for (int i = 0; i < 4; i++) {
        std::cout << "Ingrese el numero " << i + 1 << ": ";
        std::cin >> numeros[i];
    }

    // Comprobar el menor y el segundo menor de los numeros
    menor = numeros[0];
    segundoMenor = numeros[1];
    for (int i = 2; i < 4; i++) {
        if (numeros[i] < menor) {
            segundoMenor = menor;
            menor = numeros[i];
        } else if (numeros[i] < segundoMenor) {
            segundoMenor = numeros[i];
        }
    }

    // Mostrar el menor y el segundo menor por pantalla, indicando el orden en el que fueron ingresados
    std::cout << "El numero menor es: " << menor << " (ingresado como " << numeros[0] << ")" << std::endl;
    std::cout << "El segundo numero menor es: " << segundoMenor << " (ingresado como " << (segundoMenor == menor ? numeros[1] : numeros[numeros[0] != menor ? 1 : 2]) << ")" << std::endl;

    return 0;
}
