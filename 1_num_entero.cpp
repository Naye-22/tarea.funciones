/*  Fecha: 9/6/2024
    Autor: Nayeli Cruz 
    Orden: 1) Diseñe la función que recibe como parámetro un entero, 
    y calcula el cuadrado de ese entero. (Resuelto en clases)
*/
#include <iostream>
using namespace std;

//DOCUMENTE LA FUNCION
int calcularCuadrado(int entero);

int main() {
    int numero;
    
    cout << "Ingrese un número entero: ";
    cin >> numero;
    
    int resultado = calcularCuadrado(numero);
    
    cout << "El cuadrado de " << numero << " es " << resultado << endl;
    
    return 0;
}

int calcularCuadrado(int entero) {
    return entero * entero;
}
