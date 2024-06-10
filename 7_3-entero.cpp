/*  Fecha: 9/6/2024
    Autor: Nayeli Cruz 
    Orden: 7)  Una función recibe 3 enteros. El primero indica la cantidad de números aleatorios que la función 
    debe generar; el segundo y el tercero indican los límites inferior y superior dentro de los cuales se 
    debe generar cada número. La tarea de esta función será la de retornar la sumatoria de esos números generados.
*/
#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
using namespace std;

int SumaNumAleatorios(int cantidad, int limiteInferior, int limiteSuperior);

int main() {
    int cantidad, limiteInferior, limiteSuperior;
    
    cout << "Ingrese la cantidad de números aleatorios a generar: ";
    cin >> cantidad;
    
    cout << "Ingrese el límite inferior del rango: ";
    cin >> limiteInferior;
    
    cout << "Ingrese el límite superior del rango: ";
    cin >> limiteSuperior;
    
    int suma = SumaNumAleatorios(cantidad, limiteInferior, limiteSuperior);
    
    cout << "La sumatoria de " << cantidad << " números aleatorios entre " << limiteInferior 
              << " y " << limiteSuperior << " es " << suma << endl;
    
    return 0;
}

int SumaNumAleatorios(int cantidad, int limiteInferior, int limiteSuperior) {
    srand(time(0));
    int suma = 0;
    
    for (int i = 0; i < cantidad; ++i) {
        int numeroAleatorio = limiteInferior + rand() % (limiteSuperior - limiteInferior + 1);
        suma += numeroAleatorio;
    }
    
    return suma;
}