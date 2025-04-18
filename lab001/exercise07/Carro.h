#ifndef CARRO_H
#define CARRO_H

class Carro {
private:
    float tanque;  // Quantidade de combustível no carro (em litros)
    float distanciaPercorrida;  // Distância total percorrida (em km)
    const float capacidadeTanque = 50.0f;  // Capacidade máxima do tanque (50 litros)
    const float consumo = 15.0f;  // Consumo do carro (km/litro)

public:
    // Construtores
    Carro();
    
    // Métodos
    void abastecer(float litros);
    void mover(float km);
    float consultarCombustivel() const;
    float consultarDistancia() const;
};

#endif
