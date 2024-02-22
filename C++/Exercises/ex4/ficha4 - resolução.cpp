#include <iostream>

using namespace std;

int main() {

    int resultado = 0, numero = 0;
    int numerosinseridos = 0;
    float media = 0;
    string somaTxt = "";

    cout << "\nSomar numeros ate que digite o numero 0\n\n";

    do {
        cout << "\nDiga qual o numero a somar: ";
        cin >> numero;

        if (numero != 0) {
         // IF (someTxt != "") somaTxt += " + "
         if (somaTxt != "") {
            somaTxt += " + ";
         }

         somaTxt += to_string(numero);
         resultado += numero;
         numerosinseridos++;
        }
    }

    while (numero != 0);

    cout << "\n\nInserir " << numerosinseridos << " numeros" << endl;
    cout << "\nResultado de " << somaTxt << " = " << resultado << endl;
    cout << "\nA media de (" << somaTxt << ") / " << numerosinseridos;

    media = ((float)resultado) / ((float)numerosinseridos);
    cout << " = " << media;
    cout << endl;

    return 0;
}
