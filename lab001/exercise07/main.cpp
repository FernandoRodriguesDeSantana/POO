#include <iostream>
#include "Carro.h"
using namespace std;

int main() {
    // Criando dois objetos Carro
    Carro carro1;
    Carro carro2;

    // Abastecendo o carro 1 com 20 litros e o carro 2 com 50 litros
    carro1.abastecer(20);
    carro2.abastecer(50);

    // Movendo os carros
    carro1.mover(150);  // Carro 1 vai percorrer 150 km
    carro2.mover(200);  // Carro 2 vai percorrer 200 km

    // Consultando os estados dos carros
    cout << "Carro 1 - Combustível restante: " << carro1.consultarCombustivel() << " litros." << endl;
    cout << "Carro 1 - Distância percorrida: " << carro1.consultarDistancia() << " km." << endl;

    cout << "Carro 2 - Combustível restante: " << carro2.consultarCombustivel() << " litros." << endl;
    cout << "Carro 2 - Distância percorrida: " << carro2.consultarDistancia() << " km." << endl;

    return 0;
}
