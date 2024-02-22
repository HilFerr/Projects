#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h> // printf ; scanf ; puts ; null

using namespace std;

// DECLARAÇÃO DAS FUNÇÕES
void iniciojogo() {
    cout << " BEM VINDO AO JOGO ";
}

// ÍNICIO DO CÓDIGO
int main() {

    bool tabuleiropreenchido = false;
    bool gameover = false;

    int escolhaX, escolhaY;

    do {
        iniciojogo();
        cin >> escolhaX;
        cin >> escolhaY;
    } while (!gameover);

    return 0;
}

