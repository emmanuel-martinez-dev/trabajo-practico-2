#include <iostream>

int main() {
    double precio;
    int tipoPago;
    double descuentos[] = {0.9, 0.95, 1.0};

    // Pedir el precio del articulo y el tipo de pago
    std::cout << "Ingrese el precio del articulo: ";
    std::cin >> precio;
    std::cout << "Ingrese el tipo de pago (1 para efectivo, 2 para tarjeta, 3 para tickets): ";
    std::cin >> tipoPago;

    // Calcular el precio final según el tipo de pago
    if (tipoPago >= 1 && tipoPago <= 3) {
        double precioFinal = precio * descuentos[tipoPago - 1];
        std::cout << "El precio final a pagar es: " << precioFinal << std::endl;
    } else {
        std::cout << "Error: tipo de pago no valido." << std::endl;
    }

    return 0;
}
