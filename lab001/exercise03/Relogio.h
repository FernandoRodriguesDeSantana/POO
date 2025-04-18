#ifndef RELOGIO_H
#define RELOGIO_H

using namespace std;

class Relogio{
private:
    // Atributos da classe
    int horas;
    int minutos;
    int segundos;
    
public:
    // Construtor
    Relogio();
    Relogio(int h, int m, int s);
    
    // Método setter
    void setHorario(int h, int m, int s);
    
    // Método getter
    void getHorario(int& h, int& m, int& s);    // PASSAGEM POR REFERÊNCIA para alterar os valores das variáveis h, m e s de maneira externa à função
                                                // (por isso é uma função do tipo void(), já que ela não retornará diretamente nenhum valor, mas sim alterar parâmetros)
    // Método tick()
    void tick();    // O método tick() não precisa de parâmetros pois trabalha somente com os atributos da própria classe
};

#endif