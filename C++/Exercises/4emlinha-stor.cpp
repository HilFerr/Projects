#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

int ntabelas = 8, nelementos = 6;
string tabela[8][6] = {
    { " ", " ", " ", " ", " ", " "},
    { " ", " ", " ", " ", " ", " "},
    { " ", " ", " ", " ", " ", " "},
    { " ", " ", " ", " ", " ", " "},
    { " ", " ", " ", " ", " ", " "},
    { " ", " ", " ", " ", " ", " "},
    { " ", " ", " ", " ", " ", " "}
};

void InicioJogo() {
    // MENSAGEM CIN COUT
    // CAPTAÇÃO DA DECISÃO DOS JOGADORES
}

bool TerminouJogo() {
    // VERIFICAR SE O JOGO TERMINOU
    // ALGUEM GANHOU / TABULEIRO CHEIO
}

bool TabuleiroCheio() {

}

bool AlguemGanhou() {

}

void MostrarTabuleiro() {

}

int main() {
    string Tabuleiro[8][6]; /// 8 COLUNAS & 6 TABELAS

    bool TabuleiroPreenchido = false;
    bool JogoTerminou = false;

    do {
        InicioJogo();
    } while (!JogoTerminou);

    return 0;
}
