#include <iostream>
#include "ArCondicionado.h"

using namespace std;

int main() {
    // Criando dois ar condicionados com potências diferentes
    ArCondicionado ar1(5, 25.0); // Potência 5, temperatura externa 25°C
    ArCondicionado ar2(10, 31.0); // Potência 10, temperatura externa 31°C

    // Calculando a temperatura do ambiente para cada ar condicionado
    ar1.calcularTemperaturaAmbiente();
    ar2.calcularTemperaturaAmbiente();

    // Exibindo as temperaturas do ambiente
    cout << "Temperatura ambiente com Ar1 (potência 5, externa 25°C): " << ar1.consultarTemperaturaAmbiente() << "°C" << endl;
    cout << "Temperatura ambiente com Ar2 (potência 10, externa 31°C): " << ar2.consultarTemperaturaAmbiente() << "°C" << endl;

    return 0;
}
