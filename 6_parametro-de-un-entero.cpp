/*  Fecha: 9/6/2024
    Autor: Nayeli Cruz 
    Orden: 6) Diseñe la función que recibe como parámetro un entero y devuelve la cantidad de 
    cifras de este entero
*/
#include <iostream>
#include <cmath> // Para usar la función log10
using namespace std; 


//DOCUMENTE LA FUNCION
int contarCifras(int numero);

int main() {
    int numero;
    
    cout << "Ingrese un número entero: ";
    cin >> numero;
    
    int cantidadCifras = contarCifras(numero);
    
    cout << "El número " << numero << " tiene " << cantidadCifras << " cifra(s)." << endl;
    
    return 0;
}


int contarCifras(int numero) {
    if (numero == 0) {
        return 1; // El número 0 tiene 1 cifra
    } else {
        return log10(abs(numero)) + 1;
    }
}
