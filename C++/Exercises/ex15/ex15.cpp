#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

void trocaNumeros(int &num1, int &num2) {       // SE A VARIÁVEL TIVER O '&' VAI FAZER
    int aux = num1;                             // COM QUE OS VALORES MUDEM. SEM ISSO
                                                // VAI CONTINUAR COM OS MESMOS VALORES.
    num1 = num2;                                // SE APENAS UMA DAS VARIÁVEIS TIVER O
    num2 = aux;                                 // '&' APENAS ESSA VAI MUDAR O VALOR.

    cout << "Valor em num1: " << num1 << endl;
    cout << "Valor em num2: " << num2 << endl;

}

int main() {

    int x = 10, y = 200;

    cout << "Valor de x: " << x << endl;
    cout << "Valor de y: " << y << endl;

    trocaNumeros(x, y);

    cout << "Valor de x: " << x << endl;
    cout << "Valor de y: " << y << endl;

    return 0;
}
