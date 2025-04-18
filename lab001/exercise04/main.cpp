#include "Circulo.h"
#include <iostream>

using namespace std;

int main() {
    // Criando dois círculos
    Circulo c1(5, 0, 0); // Raio 5 e centro em (0,0)
    Circulo c2(3, 3, 4); // Raio 3 e centro em (3,4)

    // Imprimindo os valores
    c1.imprimirRaio();
    c1.imprimirCentro();
    c1.imprimirArea();
    c1.imprimirCircunferencia();
    
    c2.imprimirRaio();
    c2.imprimirCentro();
    c2.imprimirArea();
    c2.imprimirCircunferencia();

    // Distância entre os centros dos dois círculos
    c1.imprimirDistancia(c2);

    return 0;
}
