//Hernandez Gonzalez Joseph Fabrizzio 1CV11
#include <iostream>
using namespace std;

// Función para calcular el coeficiente binomial
int coeficienteBinomial(int n, int k) {
    if (k == 0 || k == n)
        return 1; // Retorna 1 cuando k=0 o k=n
    else
        return coeficienteBinomial(n - 1, k - 1) + coeficienteBinomial(n - 1, k); // Calcula recursivamente el coeficiente
}

int main() {
    int numRows;
    cout << "Ingrese el numero de filas del triangulo de Pascal: ";
    cin >> numRows;

    // Imprime el triangulo de Pascal
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << coeficienteBinomial(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}

