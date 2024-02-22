#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

int ntabelas = 8, nelementos = 6;
string tabela[8][6] = {
    {" ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " "}
};

void mostrartabela() {
    cout << "\nTABELA:" << endl << endl;

    for (int y = nelementos - 1; y >= 0; y--) {
        for (int x = 0; x < ntabelas; x++) {
            if (x > 0) cout << "|";
            if (tabela[x][y] != " ") {
                cout << tabela[x][y];
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    string nomejogador1, nomejogador2;
    char jogador1, jogador2;
    string X;


    cout << "Bem vindo ao jogo!!" << endl;

    cout << "Qual o nome do jogador1? ";
    cin >> nomejogador1;

    cout << "Qual o nome do jogador2? ";
    cin >> nomejogador2;

    cout << "jogador1: " << nomejogador1 << endl;
    cout << "Jogador2: " << nomejogador2 << endl;

    cout << "\nJogador1, escolha X ou O: ";
    cin >> jogador1;


    if (jogador1 == "X" || jogador1 == "x") {
        jogador2 = "O"; // Se jogador1 escolheu X, jogador2 fica com O
    } else if (jogador1 == "O" || jogador2 == "o") {
        jogador2 = "X"; // Se jogador1 escolheu O, jogador2 fica com X
    } else {
        return 0;
    }



    // Mostra as escolhas dos jogadores
    cout << "jogador1: " << jogador1 << endl;
    cout << "jogador2: " << jogador2 << endl;

    mostrartabela();

    return 0;
}
