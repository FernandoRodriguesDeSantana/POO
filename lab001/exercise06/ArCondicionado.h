#ifndef ARCONDICIONADO_H
#define ARCONDICIONADO_H

class ArCondicionado {
private:
    int potencia;        // Potência de 0 a 10
    float temperaturaExterna;  // Temperatura externa informada pelo sensor
    float temperaturaAmbiente; // Temperatura do ambiente calculada com base na potência

public:
    // Construtores
    ArCondicionado(); // Construtor padrão
    ArCondicionado(int pot, float tempExterna); // Construtor com parâmetros

    // Métodos para definir valores
    void definirPotencia(int pot);
    void definirTemperaturaExterna(float tempExterna);

    // Método para calcular a temperatura do ambiente
    void calcularTemperaturaAmbiente();

    // Métodos para consultar a temperatura do ambiente
    float consultarTemperaturaAmbiente() const;
};

#endif
