//Hernandez Gonzalez Joseph Fabrizzio 1CV11
#include <iostream>
using namespace std;

// Función para calcular el n-ésimo término de Fibonacci
int fibonacci(int n) {
    if (n <= 1)
        return n; // Retorna 0 para n=0 y 1 para n=1
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Suma los dos términos anteriores
}

int main() {
    int n;
    cout << "Ingrese el numero de terminos de la secuencia de Fibonacci: ";
    cin >> n;

    cout << "La secuencia de Fibonacci es: ";
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}

