#ifndef CIRCULO_H
#define CIRCULO_H

using namespace std;

class Circulo {

private:
    // Atributos
    float raio;
    float centroX;
    float centroY;

    // Métodos privados
    float calcularArea();
    float calcularCircunferencia();
    float calcularDistancia(const Circulo& outro); // Recebe uma referência constante para outro objeto da classe Circulo,
                                                  // garantindo que o objeto passado não será modificado.
public:
    // Construtores
    Circulo();                                    // Construtor padrão
    Circulo(float r, float x, float y);           // Construtor com parâmetros
    
    // Métodos públicos
    void definirRaio(float r);                    // Define o raio
    void aumentarRaio(float percentual);          // Aumenta o raio
    void definirCentroCirculo(float x, float y);  // Define o centro
    void imprimirRaio();                          // Imprime o raio
    void imprimirCentro();                        // Imprime o centro
    void imprimirArea();                          // Imprime a área do círculo
    void imprimirCircunferencia();                // Imprime a circunferência do círculo
    void imprimirDistancia(const Circulo& outro); // Imprime a distância entre dois círculos
};

#endif
