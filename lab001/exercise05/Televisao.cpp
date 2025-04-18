#include "Televisao.h"
#include <iostream>

using namespace std;

// Construtor padrão
Televisao::Televisao() {
    volume = 10;  // Valor inicial padrão para o volume
    canal = 1;    // Valor inicial padrão para o canal
}

// Construtor com parâmetros
Televisao::Televisao(int v, int c) {
    if ((v >= 0) && (v <= 100)) {
        volume = v;
    } else {
        volume = 10;
    }

    if ((c >= 0) && (c <= 75)) {
        canal = c;
    } else {
        canal = 1;
    }
}

// Métodos para controlar o volume
void Televisao::aumentarVolume() {
    if (volume < 100) {
        volume++;
    } else {
        cout << "Volume máximo atingido!" << endl;
    }
}

void Televisao::diminuirVolume() {
    if (volume > 0) {
        volume--;
    } else {
        cout << "Volume mínimo atingido!" << endl;
    }
}

// Métodos para controlar o canal
void Televisao::aumentarCanal() {
    if (canal < 75) {
        canal++;
    } else {
        cout << "Não há mais canais disponíveis!" << endl;
    }
}

void Televisao::diminuirCanal() {
    if (canal > 0) {
        canal--;
    } else {
        cout << "Já no primeiro canal!" << endl;
    }
}

void Televisao::trocarCanal(int c) {
    if (c >= 0 && c <= 75) {
        canal = c;
    } else {
        cout << "Canal inválido! O canal deve estar entre 0 e 75." << endl;
    }
}

int Televisao::consultarCanal() const {
    return canal;
}

int Televisao::consultarVolume() const {
    return volume;
}

