#include <iostream>
#include "Elevador.h"

using namespace std;

int main() {
    Elevador elevador(10, 5); // capacidade 5 pessoas, 10 andares (fora o térreo)

    elevador.entra();
    elevador.entra();
    elevador.entra();
    elevador.entra();
    elevador.entra();
    elevador.sobe();
    elevador.sobe();
    elevador.sai();
    elevador.desce();

    cout << "Andar atual: " << elevador.getAndarAtual() << endl;
    cout << "Total de andares: " << elevador.getNumeroAndares() << endl;
    cout << "Capacidade: " << elevador.getCapacidadeElevador() << endl;
    cout << "Pessoas presentes: " << elevador.getQtdPessoas() << endl;

    return 0;
}
