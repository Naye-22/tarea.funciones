/*  Fecha: 9/6/2024
    Autor: Nayeli Cruz 
    Orden: 2) Diseñe la función que imprime una tabla de multiplicar. (Resuelto en clases)
*/
#include <iostream>
using namespace std;


void imprimirTablaMultiplicar(int numero);

int main() {
    int numero;
    
    cout << "Ingrese un número entero para imprimir su tabla de multiplicar: ";
    cin >> numero;
    
    imprimirTablaMultiplicar(numero);
    
    return 0;
}

void imprimirTablaMultiplicar(int numero) {
    std::cout << "Tabla de multiplicar del " << numero << ":" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }
}