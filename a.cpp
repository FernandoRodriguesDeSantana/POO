#ifndef PESSOA_H
#define PESSOA_H

#include <string>

// definindo a classe "Pessoa"
class Pessoa{
    // Atributos são as variáveis que representam o estado do objeto
    // atributos privados só a classe pode acessar      
    // atributos públicos são acessíveis de fora da classe
    // Métodos são as funções que a classe possui, que definem o comportamento do objeto. Podem acessar e modificar os atributos.
    // Um construtor é um método especial de uma classe que é chamado automaticamente quando você cria um objeto.

    // -------------------------- // --------------------------

private:
    std::string nome;
    int idade;
    float altura;

public:
    Pessoa(const std::string& nome, int idade, float altura);   // construtor
    void apresentar() const;
}

#endif
