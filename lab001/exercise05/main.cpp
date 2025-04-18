#include "Televisao.h"
#include <iostream>

using namespace std;

int main() {
    Televisao tv1;  // Criação de um objeto da classe Televisao com valores padrão

    // Testando os métodos de controle de volume e canal
    cout << "Volume inicial: " << tv1.consultarVolume() << endl;
    tv1.aumentarVolume();
    cout << "Volume após aumento: " << tv1.consultarVolume() << endl;

    cout << "Canal inicial: " << tv1.consultarCanal() << endl;
    tv1.aumentarCanal();
    cout << "Canal após aumento: " << tv1.consultarCanal() << endl;

    // Testando a troca de canal
    tv1.trocarCanal(50);
    cout << "Canal após troca: " << tv1.consultarCanal() << endl;

    return 0;
}
