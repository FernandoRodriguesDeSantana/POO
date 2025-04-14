// .h SERVE PARA DECLARAÇÃO DA CLASSE

// Proteção contra múltiplas inclusões: garante que esse arquivo só será incluído uma vez na compilação.
#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

// Criando uma classe
class Pessoa{

// Definindo atributos encapsulados (protegidos, pois só a classe pode acessá-los)
private:
    string nome;
    int idade;
    float altura;
    
public:
// Definindo métodos construtores, usados para inicializar objetos de uma classe e definir seus valores iniciais
    Pessoa();   // Construtor
    Pessoa(string n, int i, float a);   // Construtor com parâmetros
    
// Definindo getters, os quais devolvem os valores de um atributo
    string getNome() const;
    int getIdade() const;
    float getAltura() const;
    
// Definindo setters, os quais alteram o valor de um atributo, com possibilidade de validação (ex: não ser permitido idades negativas)
    void setNome(string name);
    void setIdade(int idade);
    void setAltura(float altura);

// Definindo um método que exibe o nome da pessoa
    void imprimirDados() const;
};

// Final da proteção contra múltiplas inclusões
#endif

