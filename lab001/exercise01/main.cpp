#include <stdio.h>
#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
// Criando um objeto com o construtor Pessoa()
    Pessoa pessoa1("Fernando", 21, 1.80);
    pessoa1.imprimirDados();
    
    Pessoa pessoa2;
    pessoa2.setNome("Jair Bolsonaro");
    pessoa2.setIdade(70);
    pessoa2.setAltura(1.85);
    pessoa2.imprimirDados();
    
    
    return 0;
}   