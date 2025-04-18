#include "Circulo.h"
#include <iostream>
#include <cmath>

using namespace std;

// Construtor padrão
Circulo::Circulo(){
    raio = 0.0;
    centroX = 0.0;
    centroY = 0.0;
}

// Construtor com parâmetros
Circulo::Circulo(float r, float x, float y){
    raio = r;
    centroX = x;
    centroY = y;
}

// Define o raio do círculo
void Circulo::definirRaio(float r){
    raio = r;
}

// Aumenta o raio do círculo utilizando um percentual
void Circulo::aumentarRaio(float percentual){
    raio = raio * (1 + (percentual/100));
}

// Define as coordenadas X e Y referente ao centro do círculo
void Circulo::definirCentroCirculo(float x, float y){
    centroX = x;
    centroY = y;
}

// Imprime o raio do círculo
void Circulo::imprimirRaio(){
    cout << "Raio: " << raio << endl;
}

// Imprime o centro (x,y) do círculo
void Circulo::imprimirCentro(){
    cout << "Centro: (" << centroX << "," << centroY << ")" << endl;  // Corrigido aqui
}

// Imprime a área do círculo
void Circulo::imprimirArea(){
    cout << "Área: " << calcularArea() << endl;
}

// Imprime a circunferência do círculo
void Circulo::imprimirCircunferencia(){
    cout << "Circunferência: " << calcularCircunferencia() << endl;
}

// Imprime a distância entre os centros de dois círculos
void Circulo::imprimirDistancia(const Circulo& outro) {
    cout << "Distância entre os centros: " << calcularDistancia(outro) << endl;
}

// Calcula a área do círculo (π * r²)
float Circulo::calcularArea(){
    return M_PI * (raio * raio);
}

// Calcula a circunferência do círculo (2 * π * r)
float Circulo::calcularCircunferencia(){
    return 2 * M_PI * raio;
}

// Calcula a distância entre o centro de dois círculos
float Circulo::calcularDistancia(const Circulo& outro) {
    return sqrt(pow(outro.centroX - centroX, 2) + pow(outro.centroY - centroY, 2));
}
