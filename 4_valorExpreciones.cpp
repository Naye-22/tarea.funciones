/*  Fecha: 9/6/2024
    Autor: Nayeli Cruz 
    Orden: 4) Encuentre el valor de las siguientes expresiones, utilizando el depurador y la ventana watch:
*/
#include <iostream>
using namespace std;

int main() {
    // a) valores iniciales: x=5, y=0; expresión: if (x==5 && y!=0)
    int x = 5;
    int y = 0;
    if (x == 5 && y != 0) {
        cout << "Expresion a) es true" << endl;
    } else {
        cout << "Expresion a) es false" << endl;
    }

    // b) valores iniciales: n=90; expresión: if (!(n>=1 && n<=100))
    int n = 90;
    if (!(n >= 1 && n <= 100)) {
        cout << "Expresion b) es true" << endl;
    } else {
        cout << "Expresion b) es false" << endl;
    }

    // c) valores iniciales: num=10; expresión: resultado = (3.14159 * num - (num*2)/3)
    int num = 10;
    double resultado = (3.14159 * num - (num * 2) / 3);
    cout << "Resultado de la expresion c) es " << resultado << endl;

    // d) valores iniciales: p=15, q=20; expresión: if (p=15 || q>20)
    int p = 15;
    int q = 20;
    if (p == 15 || q > 20) {
        cout << "Expresion d) es true" << endl;
    } else {
        cout << "Expresion d) es false" << endl;
    }

    // e) valores iniciales: p=2, q=1; expresión: if (p!=2 || q==5)
    p = 2;
    q = 1;
    if (p != 2 || q == 5) {
        cout << "Expresion e) es true" << endl;
    } else {
        cout << "Expresion e) es false" << endl;
    }

    return 0;
}
