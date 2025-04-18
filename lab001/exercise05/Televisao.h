#ifndef TELEVISAO_H
#define TELEVISAO_H

using namespace std;

class Televisao {
private:
    int volume; // [0, 100]
    int canal;  // [0, 75]

public:
    // Construtores
    Televisao();    // Padrão
    Televisao(int volume, int canal);   // Parametrizado
    
    // Controle de volume
    void aumentarVolume();
    void diminuirVolume();

    // Controle de canal
    void aumentarCanal();
    void diminuirCanal();
    void trocarCanal(int novoCanal);

    // Consultas
    int consultarVolume() const;
    int consultarCanal() const;
};

#endif