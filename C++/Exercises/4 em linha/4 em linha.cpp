#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

const int linhas = 7;
const int colunas = 8;

// isto serve para a tabela ( assim ela fica no int main)

void printTable(char table[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    char table[linhas][colunas] = {
        {'_', '_', '_', '_', '_', '_', '_', '_'},
        {'_', '_', '_', '_', '_', '_', '_', '_'},
        {'_', '_', '_', '_', '_', '_', '_', '_'},
        {'_', '_', '_', '_', '_', '_', '_', '_'},
        {'_', '_', '_', '_', '_', '_', '_', '_'},
        {'_', '_', '_', '_', '_', '_', '_', '_'}
    };

    // a partir daqui foi o que fizemos na aula

    string jogador1, jogador2; // GUARDA O NOME DOS JOGADORES
    string simbolo_jog1, simbolo_jog2; // GUARDA O SIMBOLO DOS JOGADOR ( X / O)

    cout << "\n*******BEM VINDO AO JOGO*******!!" << endl;

    // CICLO PARA DEFINIR O NOME DOS JOGADORES
    do {
        cout << "\nQual o nome do jogador 1? ";
        cin >> jogador1;

        cout << "Qual o nome do jogador 2? ";
        cin >> jogador2;

        system ("cls"); // LIMPA TELA

        // SE O NOME DOS JOGADORES FOR IGUAL REINICIA O CICLO
        if (jogador1 == jogador2) {
            cout << "\nAmbos os jogadores nao podem ter o mesmo nome!\n";
        }

    } while (jogador1 == jogador2);

    do {
        cout << "\n" << jogador1 << ", escolha X ou O: ";
        cin >> simbolo_jog1;

        // DEFINE O SIMBOLO DO JOGADOR 2, DEPENDENDO DO SIMBOLO DO JOGADOR 1
        if (simbolo_jog1 == "X" || simbolo_jog1 == "x") {
            simbolo_jog1 = "X";
            simbolo_jog2 = "O";

        } else if (simbolo_jog1 == "O" || simbolo_jog1 == "o") {
            simbolo_jog1 = "O";
            simbolo_jog2 = "X";

        } else {
            system ("cls");

            cout << "\nCaracter invalido!";
        }

    } while (simbolo_jog1 != "X" && simbolo_jog1 != "x" && simbolo_jog1 != "O" && simbolo_jog1 != "o");

    system ("cls"); // LIMPA TELA

    // DEVOLVE O NOME E O SIMBOLO DE CADA JOGADOR
    cout << jogador1 << ": " << simbolo_jog1 << endl;
    cout << jogador2 << ": " << simbolo_jog2 << endl;

    // isto serve para exibir a tabela
    printTable(table);


    return 0;
}
