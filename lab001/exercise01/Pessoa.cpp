// .cpp SERVE PARA IMPLEMENTAÇÃO DOS MÉTODOS

#include "Pessoa.h"
#include <iostream>

using namespace std;

// Iniciando os atributos com valores default
Pessoa::Pessoa() : nome(""), idade(0), altura(0.0) {}

// Construtor com valores definidos pelo usuário
Pessoa::Pessoa(string n, int i, float a){
    nome = n;
    setIdade(i);
    setAltura(a);
}

// Definindo getters
string Pessoa::getNome() const{
    return nome;
}

int Pessoa::getIdade() const{
    return idade;
}

float Pessoa::getAltura() const{
    return altura;
}

// Definindo setters
void Pessoa::setNome(string n){
    nome = n;
}

void Pessoa::setIdade(int i){
    if(i >= 0){
        idade = i;
    }
    else{
        idade = 0;
    }
}

void Pessoa::setAltura(float a){
    if(a > 0.0){
        altura = a;
    }
    else{
        altura = 0.0;
    }
}

// Método para imprimir as informações
void Pessoa::imprimirDados() const{
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "Altura: " << altura << " metros" << endl;
}