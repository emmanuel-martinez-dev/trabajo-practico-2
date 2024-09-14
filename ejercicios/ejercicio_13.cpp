#include <iostream>

int main() {
    int cantidadMedialunas;

    // Pedir la cantidad de medialunas compradas
    std::cout << "Ingrese la cantidad de medialunas compradas: ";
    std::cin >> cantidadMedialunas;

    // Calcular el total a pagar
    double total;
    if (cantidadMedialunas <= 12) {
        // Si se compran menos de 12 medialunas, se pagan a $0.20 cada una
        total = cantidadMedialunas * 0.20;
    } else {
        // Si se compran 12 o mas medialunas, se pagan a $2 la docena
        int docenas = cantidadMedialunas / 12;
        int sobrantes = cantidadMedialunas % 12;
        total = docenas * 2.0;
        if (sobrantes > 0) {
            total += sobrantes * 0.20;
        }

        // Aplicar descuento si se compran mas de una docena
        if (docenas > 1) {
            if (docenas > 2) {
                total *= 0.80; // Descuento del 20%
            } else {
                total *= 0.90; // Descuento del 10%
            }
        }
    }

    // Mostrar el total a pagar
    std::cout << "El total a pagar es: $" << total << std::endl;

    return 0;
}
