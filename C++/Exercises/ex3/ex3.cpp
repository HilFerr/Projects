#include <iostream>

using namespace std;

// INÍCIO DO CÓDIGO

int main() {

    char letra1, letra2;

    cout << "\nYou wake up in room. \nArround you are 4 "

    if (((letra == 'U') && (letra2 == 'U'))
        || ((letra1 == 'R') && (letra2 == 'D'))) {
        cout << ":-|";

    } else if (((letra1 == 'U') && (letra2 == 'R'))
        || ((letra1 == 'R') && (letra2 == 'R'))) {
        cout << ")-:";

    } else if (((letra1 == 'U') && (letra2 == 'L'))
        || ((letra1 == 'U') && (letra2 == 'D'))
        || ((letra1 == 'D') && (letra2 == 'R'))
        || ((letra1 == 'D') && (letra2 == 'L'))
        || ((letra1 == 'L') && (letra2 == 'L'))
        || ((letra1 == 'R') && (letra2 == 'L'))){
        cout << "/-:";

    } else if (((letra1 == 'D') && (letra2 == 'U'))
        || ((letra1 == 'D') && (letra2 == 'D'))
        || ((letra1 == 'L') && (letra2 == 'U'))
        || ((letra1 == 'L') && (letra2 == 'R'))
        || ((letra1 == 'L') && (letra2 == 'D'))
        || ((letra1 == 'R') && (letra2 == 'U'))){
        cout << ":-)";

    } else {
        // DÁ INDICAÇÃO AO UTILIZADOR QUE ELE ESCREVEU ALGUMA COISA MAL
        cout << "Caminho não encontrado!";
    }

    return 0;
}
