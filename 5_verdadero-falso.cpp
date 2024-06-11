/*  Fecha: 9/6/2024
    Autor: Nayeli Cruz 
    Orden: 5) Diseñe la función que recibe como parámetro un entero y 
    devuelve verdadero si el número es par, devuelve falso si es impar
*/
#include <iostream>


//DOCUMENTE LA FUNCION
// Declaración de la función
bool esPar(int numero);
using namespace std;

int main() {
    int numero;
    
    cout << "Ingrese un número entero: ";
    cin >> numero;
    
    if (esPar(numero)) {
        cout << "El número " << numero << " es par." << endl;
    } else {
        cout << "El número " << numero << " es impar." << endl;
    }
    
    return 0;
}

bool esPar(int numero) {
    return numero % 2 == 0;
}
