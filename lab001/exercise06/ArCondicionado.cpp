#include "ArCondicionado.h"

// Construtor padrão
ArCondicionado::ArCondicionado() {
    potencia = 0;          // Inicialmente desligado
    temperaturaExterna = 0.0;
    temperaturaAmbiente = 0.0;
}

// Construtor com parâmetros
ArCondicionado::ArCondicionado(int pot, float tempExterna) {
    definirPotencia(pot);
    definirTemperaturaExterna(tempExterna);
}

// Método para definir a potência
void ArCondicionado::definirPotencia(int pot) {
    if (pot >= 0 && pot <= 10) {
        potencia = pot;
    } else {
        potencia = 0; // Definindo 0 se o valor for inválido
    }
}

// Método para definir a temperatura externa
void ArCondicionado::definirTemperaturaExterna(float tempExterna) {
    temperaturaExterna = tempExterna;
}

// Método para calcular a temperatura do ambiente com base na potência e temperatura externa
void ArCondicionado::calcularTemperaturaAmbiente() {
    float variacao = potencia * 1.8;  // Cada unidade de potência diminui 1.8 graus
    temperaturaAmbiente = temperaturaExterna - variacao;
    if (temperaturaAmbiente < 0) {
        temperaturaAmbiente = 0; // Não pode ser abaixo de 0°C
    }
}

// Método para consultar a temperatura do ambiente
float ArCondicionado::consultarTemperaturaAmbiente() const {
    return temperaturaAmbiente;
}
