#include <iostream>

int main() {
    float sueldoBruto, sueldoNeto;

    // Pedir el sueldo bruto por teclado
    std::cout << "Ingrese el sueldo bruto del empleado: ";
    std::cin >> sueldoBruto;

    // Calcular el impuesto según la escala
    float impuesto = 0;
    if (sueldoBruto > 3000) {
        float excedente3000 = sueldoBruto - 3000;
        impuesto = 175 + (excedente3000 * 0.1);
    } else if (sueldoBruto > 2000) {
        float excedente2000 = sueldoBruto - 2000;
        impuesto = 100 + (excedente2000 * 0.075);
    } else if (sueldoBruto > 1000) {
        float excedente1000 = sueldoBruto - 1000;
        impuesto = (excedente1000 * 0.05);
    }

    // Calcular el sueldo neto
    sueldoNeto = sueldoBruto - impuesto;

    // Mostrar el sueldo neto
    std::cout << "El sueldo neto es: $" << sueldoNeto << std::endl;

    return 0;
}
