#include "Relogio.h"
#include <iostream>
using namespace std;

int main() {
    // Cria o relógio com horário inicial 23:59:58
    Relogio relogio(23, 59, 58);

    int h, m, s;

    // Exibe o horário inicial
    relogio.getHorario(h, m, s);
    cout << "Horário inicial: " << h << ":" << m << ":" << s << endl;

    // Simula i ticks (1 segundo a cada chamada)
    for (int i = 0; i < 100; i++) {
        relogio.tick();
        relogio.getHorario(h, m, s);
        cout << "Tick " << i + 1 << ": " << h << ":" << m << ":" << s << endl;
    }

    return 0;
}
