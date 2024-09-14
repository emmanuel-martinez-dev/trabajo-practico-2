#include <iostream>

int main() {
    double precioNeto;
    int tipoIva;

    // Pedir el precio neto y el tipo de IVA
    std::cout << "Ingrese el precio neto del artículo: ";
    std::cin >> precioNeto;
    std::cout << "Ingrese el tipo de IVA (1 para 10,5% o 2 para 21%): ";
    std::cin >> tipoIva;

    // Calcular el precio con IVA
    double precioConIva;
    if (tipoIva == 1) {
        precioConIva = precioNeto * 1.105;
    } else if (tipoIva == 2) {
        precioConIva = precioNeto * 1.21;
    } else {
        std::cout << "Error: tipo de IVA no valido." << std::endl;
        return 1;
    }

    // Mostrar el precio con IVA
    std::cout << "El precio con IVA es: " << precioConIva << std::endl;

    return 0;
}
