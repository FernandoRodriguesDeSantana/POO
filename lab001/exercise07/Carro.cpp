#include "Carro.h"
#include <iostream>
using namespace std;

// Construtor padrão
Carro::Carro() {
    tanque = 0.0f;  // Inicializa o tanque vazio
    distanciaPercorrida = 0.0f;  // Inicializa a distância percorrida como 0
}

// Método para abastecer o carro
void Carro::abastecer(float litros) {
    if (litros < 0) {
        cout << "Quantidade de gasolina inválida!" << endl;
        return;
    }

    if (tanque + litros <= capacidadeTanque) {
        tanque += litros;
        cout << "Carro abastecido com " << litros << " litros." << endl;
    } else {
        tanque = capacidadeTanque;  // Se o abastecimento for maior que a capacidade, o tanque é preenchido até o máximo
        cout << "Tanque cheio. Capacidade máxima atingida." << endl;
    }
}

// Método para mover o carro
void Carro::mover(float km) {
    float combustivelNecessario = km / consumo;  // Quantidade de combustível necessária para percorrer a distância

    if (combustivelNecessario > tanque) {
        cout << "Combustível insuficiente para percorrer essa distância!" << endl;
    } else {
        tanque -= combustivelNecessario;  // Subtrai o combustível utilizado
        distanciaPercorrida += km;  // Adiciona a distância percorrida
        cout << "Carro se moveu " << km << " km." << endl;
    }
}

// Método para consultar a quantidade de combustível
float Carro::consultarCombustivel() const {
    return tanque;
}

// Método para consultar a distância percorrida
float Carro::consultarDistancia() const {
    return distanciaPercorrida;
}
