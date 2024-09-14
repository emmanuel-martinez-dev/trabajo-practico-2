#include <iostream>

int main() {
    float nota;

    // Pedir la nota por teclado
    std::cout << "Ingrese la nota obtenida por el alumno: ";
    std::cin >> nota;

    // Verificar la nota y emitir el cartel correspondiente
    if (nota >= 8) {
        std::cout << "Promociona" << std::endl;
    } else if (nota >= 4 && nota < 8) {
        std::cout << "Aprobado" << std::endl;
    } else {
        std::cout << "Reprobado" << std::endl;
    }

    return 0;
}
