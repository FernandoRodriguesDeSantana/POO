#ifndef ELEVADOR_H
#define ELEVADOR_H

class Elevador{
private:
    int andarAtual;
    int numeroAndares;
    int capacidadeElevador;
    int qtdPessoas;
    
public:
    // Para o objeto "elevador" ser criado é necessário saber apenas a capacidade e o número de andares
    Elevador();
    Elevador(int capacidade, int andares);
    
    // Definindo getters
    int getAndarAtual() const;
    int getNumeroAndares() const;
    int getCapacidadeElevador() const;
    int getQtdPessoas() const;
    
    // Definindo setters
    void setAndarAtual(int a);
    void setNumeroAndares(int n);
    void setCapacidadeElevador(int c);
    void setQtdPessoas(int q);
    
    // Método de impressão
    void imprimirDados() const;
    
    // Métodos do elevador
    void entra();
    void sai();
    void sobe();
    void desce();
};

#endif