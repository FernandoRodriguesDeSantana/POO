#include "Elevador.h"
#include <iostream>
using namespace std;

// Construtor default
Elevador::Elevador() : numeroAndares(0), capacidadeElevador(0) {}

// Construtor com parâmetros
Elevador::Elevador(int n, int c){
    andarAtual = 0;
    qtdPessoas = 0;
    setNumeroAndares(n);
    setCapacidadeElevador(c);
}

// Getters
int Elevador::getAndarAtual() const{
    return andarAtual;
}

int Elevador::getNumeroAndares() const{
    return numeroAndares;
}

int Elevador::getCapacidadeElevador() const{
    return capacidadeElevador;
}

int Elevador::getQtdPessoas() const{
    return qtdPessoas;
}

// Setters
void Elevador::setAndarAtual(int a){
    andarAtual = a;
}

void Elevador::setNumeroAndares(int n){
    if(n >= 0){
        numeroAndares = n;
    }
    else{
        cout << "Número de andares inválido. Deve ser >= 0." << endl;
    }
}

void Elevador::setCapacidadeElevador(int c){
    if(c >= 1){
        capacidadeElevador = c;
    }
    else{
        cout << "A capacidade deve ser >= 0" << endl;
    }
}

void Elevador::setQtdPessoas(int q){
    if((q >= 0) && (q <= capacidadeElevador)){
        qtdPessoas = q;
    }
    else{
        cout << "Número inválido" << endl;
    }
}

void Elevador::entra(){
    if (qtdPessoas < capacidadeElevador) {
        qtdPessoas++;
    } else {
        cout << "Elevador cheio!" << endl;
    }
}

void Elevador::sai(){
    if(qtdPessoas > 0){
        qtdPessoas--;
    }
    else{
        cout << "Elevador vazio!" << endl;
    }
}

void Elevador::sobe(){
    if(andarAtual < numeroAndares){
        andarAtual++;
    }
    else{
        cout << "Já está no último andar!" << endl;
    }
}

void Elevador::desce(){
    if(andarAtual > 0){
        andarAtual--;
    }
    else{
        cout << "Já está no primeiro andar" << endl;
    }
}

void Elevador::imprimirDados() const {
    cout << "Andar atual: " << andarAtual << endl;
    cout << "Total de andares: " << numeroAndares << endl;
    cout << "Capacidade: " << capacidadeElevador << endl;
    cout << "Pessoas no elevador: " << qtdPessoas << endl;
}
