#include <iostream>
#include <cmath>
#include <string>
#include <array>

using namespace std;

int posicao = 0;

string pilha[6];

void push() {
    if (posicao < 6) {
        cout << "Insira um numero na pilha: ";
        cin >> pilha[posicao];
        posicao++;
        system("cls");
    } else {
        cout << "\n\t\t PILHA CHEIA";
    }
}

void pop() {
    if (posicao > 0) {
        cout << "Retirou um numero da pilha.";
        cout << pilha[posicao - 1] << endl << endl;
        posicao--;
    } else {
        cout << "\n\t\t NAO TEM ELEMENTOS NA PILHA";
    }

}

void top() {
    if (posicao > 0) {
        cout << "Top = " << pilha[posicao - 1] << endl;
    } else {
        cout << "\n\t\t NAO TEM ELEMENTOS NA PILHA";
    }

}

void mostrarPilha() {
    for (int i = 0; i < posicao; i++) {
        cout << "Pilha [" << i << "] = " << pilha[i] << endl;

    }
}

int main() {

    int op, continua = true;

    do {
        cout << "\t\t Pilha Stack \n\n";
        cout << "O que pretende fazer? \n";
        cout << "1) Push - Inserir na pilha\n";
        cout << "2) Pop - Retirar da pilha\n";
        cout << "3) Top - Elemento no topo da pilha\n";
        cout << "4) Mostrar pilha\n";
        cout << "R: ";
        cin >> op;

        switch (op) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                top();
                break;
            case 4:
                mostrarPilha();
                break;
            default:
                continua = false;
                break;
        }
    } while (continua);}

/*    int posicao = 0;

    to_string(posicao);

    string pilha[6] = {posicao};

    for (pilha[i]) {
        do {
        cout << "Introduza número: ";
        cin >> posicao;
        posicao++;

        } while (pilha[6] != 6);
    }


    return 0;
 */
