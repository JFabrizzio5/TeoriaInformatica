//Hernandez Gonzalez Joseph Fabrizzio 1CV11
#include <iostream>
using namespace std;

// Función para calcular el descuento según el monto de compra
float calcularDescuento(float monto) {
    if (monto > 5000)
        return monto * 0.5; // Descuento del 50% si la compra es mayor a 5000
    else if (monto > 4000)
        return monto * 0.4; // Descuento del 40% si la compra es mayor a 4000
    else if (monto > 3000)
        return monto * 0.3; // Descuento del 30% si la compra es mayor a 3000
    else if (monto > 2000)
        return monto * 0.2; // Descuento del 20% si la compra es mayor a 2000
    else if (monto > 1000)
        return monto * 0.1; // Descuento del 10% si la compra es mayor a 1000
    else
        return 0; // Sin descuento si la compra es menor o igual a 1000
}

int main() {
    const int hora_apertura = 10; // Hora de apertura de la tienda (10 am)
    const int hora_cierre = 22; // Hora de cierre de la tienda (10 pm)

    int hora_actual = 20; // en cada iteracion se sumara uno a la hora para ver de manera funcional el cajero sin una fecha real

    int ventas_hombres = 0;
    int ventas_mujeres = 0;
    float total_ventas = 0;

    // Simulación de las ventas durante el día
    while (hora_actual >= hora_apertura && hora_actual <= hora_cierre) { // El bucle se ejecuta dentro del horario de apertura y cierre
        char genero;
        float monto_compra;

        cout << "Ingrese el genero del cliente (H para hombre, M para mujer): ";
        cin >> genero;
        cout << "Ingrese el monto de compra: ";
        cin >> monto_compra;

        // Registro de la venta y cálculo del descuento
        if (genero == 'H' || genero == 'h') {
            ventas_hombres++;
        } else if (genero == 'M' || genero == 'm') {
            ventas_mujeres++;
        }

        float descuento = calcularDescuento(monto_compra);
        float precio_final = monto_compra - descuento;
        total_ventas += precio_final;

        // Impresión del resumen de la venta
        cout << "Venta registrada:" << endl;
        cout << "Monto total de la venta: $" << monto_compra << endl;
        cout << "Descuento aplicado: $" << descuento << endl;
        cout << "Precio final después del descuento: $" << precio_final << endl;

        // Incremento de la hora actual
        hora_actual++;
    }

    // Impresión de los resultados al final del día
    cout << "La tienda ha cerrado." << endl;
    cout << "Resultados finales del dia:" << endl;
    cout << "Total de ventas del dia: $" << total_ventas << endl;
    cout << "Ventas a hombres: " << ventas_hombres << endl;
    cout << "Ventas a mujeres: " << ventas_mujeres << endl;

    return 0;
}

