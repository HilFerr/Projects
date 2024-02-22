#include <iostream>

using namespace std;

// INÍCIO DO CÓDIGO

int main() {


    int base, expoente, i, resultado = 1;
    double x;

    std:cout << "______________________________________________ \n";
    cout << " \n";
    cout << "Bom dia ";
    cout << "Vamos criar a exponeciacao de um numero \n";

    cout << "\n\t Digite o numero da base: " << endl;
    cin >> base;

    cout << "\n\t Digite o numero do expoente: " << endl;
    cin >> expoente;

    system("cls"); // LIMPA TELA

    if(expoente > 0) {
        for (i = 1; i <= expoente; i++) {
            resultado = resultado * base;

        }
        cout << "O resultado = " << resultado;

    } else if (expoente == 0) {
        cout << "O resultado = 1";

    } else {
        for (i = 1; i <= (expoente * -1); i++) {
            resultado = resultado * base;
            cout << resultado << endl;

        }
        x = 1 / resultado;
        cout << x << endl;
        cout << "O resultado +/- = " << (1 / resultado);

    }

    return 0;
}
