
/*  Fecha: 9/6/2024
    Autor: Nayeli Cruz 
    Orden: 3) Diseñe las funciones que calculan las cuatro 
    operaciones aritméticas básicas: suma, resta, producto, división
*/
#include <iostream>
using namespace std;


double sumar(double a, double b);
double restar(double a, double b);
double multiplicar(double a, double b);
double dividir(double a, double b);

int main() {
    double num1, num2;
    
    cout << "Ingrese el primer número: ";
    cin >> num1;
    
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    
    cout << "La suma de " << num1 << " y " << num2 << " es " << sumar(num1, num2) << endl;
    cout << "La resta de " << num1 << " y " << num2 << " es " << restar(num1, num2) << endl;
    cout << "El producto de " << num1 << " y " << num2 << " es " << multiplicar(num1, num2) << endl;
    cout << "La división de " << num1 << " y " << num2 << " es " << dividir(num1, num2) << endl;
    
    return 0;
}

double sumar(double a, double b) {
    return a + b;
}

double restar(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: División por cero" << endl;
        return 0; 
    }
}