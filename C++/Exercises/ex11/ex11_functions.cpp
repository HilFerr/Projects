#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h> // printf ; scanf ; puts ; null

using namespace std;

// DECLARA��O DAS FUN��ES
void iniciojogo() {
    cout << " BEM VINDO AO JOGO ";
}

// �NICIO DO C�DIGO
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

