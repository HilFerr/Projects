#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int i = 0, tipo_operacao, numero;
    string bin;

    cout << "\nQUE OPERACAO VAI REALIZAR?" << endl;
    cout << "\n1) PASSAR DE CODIGO BINARIO PARA DECIMAL;" << endl;
    cout << "2) PASSAR DE DECIMAL PARA CODIGO BINARIO;\n" << endl;
    cin >> tipo_operacao;

    system("cls");


    // OPERACAO PASSAR DE CODIGO BINARIO PARA DECIMAL
    if (tipo_operacao == 1) {
        cout << "\nQUAL O NUMERO QUE QUER USAR? ";
        cin >> numero;



    // OPERACAO PASSAR DE DECIMAL PARA CODIGO BINARIO
    } else if (tipo_operacao == 2) {
        cout << "\nQUAL O NUMERO QUE QUER USAR? ";
        cin >> numero;

            do {
                bin += to_string(numero%2);
                numero = numero/2;

            }
            while (numero != 0);

            cout << bin << endl;

    // SE OPERACAO NAO FOR NENHUMA DAS ANTERIORES
    } else if (tipo_operacao != 1 || tipo_operacao != 2) {
        cout << "\nOPERACAO INVALIDA";

    }



    return 0;
}
