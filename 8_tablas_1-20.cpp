/*  Fecha: 9/6/2024
    Autor: Nayeli Cruz 
    Orden: 8) Recícle el código del ejercicio #2 para imprimir las 20 primeras tablas de multiplicar.
*/
#include <iostream>
using namespace std;

void imprimirTablaMultiplicar(int numero);

int main() {
    for (int i = 1; i <= 20; ++i) {
        imprimirTablaMultiplicar(i);
        cout << endl; 
    }
    
    return 0;
}

// Definición de la función
void imprimirTablaMultiplicar(int numero) {
    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}