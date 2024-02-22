#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

int npilhas = 3, nelementos = 10;
string pilhas[3][10] = {
    { "", "", "", "", "", "", "", "", "", ""},
    { "", "", "", "", "", "", "", "", "", ""},
    { "", "", "", "", "", "", "", "", "", ""}
};

void mostrapilha() {
    cout << "\nPILHA:" << endl << endl;

    for (int y = nelementos - 1; y >= 0; y--) {
        for (int x = 0; x < npilhas; x++) {
            if (x > 0) cout << "|";
            //cout << "ARRAY[" << x << "][" << y << "]";
            if (pilhas[x][y] != " ") {
                cout << pilhas[x][y];
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "_______";
    for (int x = 0; x < npilhas; x++) {
        if (x > 0) cout << " | ";
        cout << x;
    }
}

void pedirelemento() {
    int qualpilha;
    string elemento;
    bool encontroulivre = false;

    cout << "\n\nEm que pilha quer colocar o elemento? (0 | 1 | 2)? ";
    cout << qualpilha;

    cout << "\nQual o elemento a colocar na pilha[" << qualpilha << "]: ";
    cout << elemento;

    for (int i = 0; i = nelementos; i++) {
        if (pilhas[qualpilha][i] == "") {
            pilhas[qualpilha][i] = elemento;
            mostrapilha();
            encontroulivre = true;
        }
    }
    if (!encontroulivre) cout << "\n\nA pilha[" << qualpilha << "] nao tem posicoes livres";

}

int main() {

    int op = 0;
    string valor = "";

    do {
        cout << "\nO que pretende fazer?\n";
        cout << "1 - Inserir um elemento na pilha;\n";
        cout << "2 - Mostrar pilha;\n";
        cout << "0 - Fechar programa.";
        cin >> op;
        switch (op) {
            case 1:
                pedirelemento();
                break;
            case 2:
                mostrapilha();
                break;
            default: break;
        }

    } while (op != 0);

    return 0;
}
