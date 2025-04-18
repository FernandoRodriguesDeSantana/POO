#include "Relogio.h"
#include <iostream>
using namespace std;

// Construtor default (neste caso, serve para inicializar o relógio)
// Classe::Construtor
Relogio::Relogio(){
    horas = 0;
    minutos = 0;
    segundos = 0;
}

Relogio::Relogio(int h, int m, int s){
    setHorario(h, m, s);
};

void Relogio::setHorario(int h, int m, int s) {
    if ((h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59)) {
        horas = h;
        minutos = m;
        segundos = s;
    } else {
        horas = 0;
        minutos = 0;
        segundos = 0;
        cout << "Valores incorretos. Relógio ajustado apra 00:00:00." << endl;
    }
}

void Relogio::getHorario(int& h, int& m, int& s){
    h = horas;
    m = minutos;
    s = segundos;
}

void Relogio::tick() {
    segundos++;
    if (segundos == 60) {
        segundos = 0;
        minutos++;

        if (minutos == 60) {
            minutos = 0;
            horas++;

            if (horas == 24) {
                horas = 0;
                minutos = 0;
                segundos = 0;
            }
        }
    }
}