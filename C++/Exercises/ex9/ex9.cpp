#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// INÍCIO DO PROGRAMA
int main() {

    char op;
    int num, aux, extra, result;
    string numaux;

    do {
        string resbin = "";

        cout << "\nCALCULADORA DE NUMERO BINARIOS. \n";
        cout << "QUAL A OPERACAO QUE QUER REALIZAR? \n";
        cout << "\n1 - PASSAR UM NUMERO DECIMAL PARA BINARIO.\n";
        cout << "2 - PASSAR UM NUMERO BINARIO PARA DECIMAL.\n";
        cout << "0 - FECHAR PROGRAMA \n\n";
        cout << "R: ";

        cin >> op;

        // CÓDIGO DE BINÁRIO PARA DECIMAL
        if (op == '1') {
            cout << endl << "QUAL O NUMERO A CONVERTER?";
            cout << endl << "R: ";
            cin >> num;
            do {
                aux = fmod(num, 2);
                resbin = to_string(aux) + resbin;
                num = num / 2;
            } while (num > 1);
            resbin = to_string(num) + resbin;
            cout << endl << resbin;

        // CÓDIGO DE DECIMAL PARA BINÁRIO
        } else if (op == '2') {
            cout << endl << "QUAL O NUMERO A CONVERTER?";
            cout << endl << "R: ";
            cin >> numaux;

            int pos = 0;
            int result = 0;

            for (int i = (numaux.length() - 1); i >= 0; i--) {
                resulT += (int(numaux[i])- 48) * pow(2, pos);
                pos++;
            }
            cout << endl << result << endl;
        } else {
            break;
        }

        cout << endl << endl;

    } while (op != '0');

    return 0;
    }
