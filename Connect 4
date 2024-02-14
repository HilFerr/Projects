#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const int rows = 7;
const int columns = 8;

// FUNCTION TO PRINT THE GAME BOARD
void printBoard(char board[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// FUNCTION TO CHECK IF THE PLAYER WON AFTER THE PLAY
// IT CHECKS FOR EVERY DIRECTION
bool checkWin(char player, char board[rows][columns]) {

    // HORIZONTAL
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= columns - 4; j++) {
            if (board[i][j] == player && board[i][j + 1] == player && board[i][j + 2] == player && board[i][j + 3] == player) {
                return true;
            }
        }
    }

    // VERTICAL
    for (int i = 0; i <= rows - 4; i++) {
        for (int j = 0; j < columns; j++) {
            if (board[i][j] == player && board[i + 1][j] == player && board[i + 2][j] == player && board[i + 3][j] == player) {
                return true;
            }
        }
    }

    // DIAGONAL (LEFT TO RIGHT)
    for (int i = 0; i <= rows - 4; i++) {
        for (int j = 0; j <= columns - 4; j++) {
            if (board[i][j] == player && board[i + 1][j + 1] == player && board[i + 2][j + 2] == player && board[i + 3][j + 3] == player) {
                return true;
            }
        }
    }

    // DIAGONAL (RIGHT TO LEFT)
    for (int i = 0; i <= rows - 4; i++) {
        for (int j = 3; j < columns; j++) {
            if (board[i][j] == player && board[i + 1][j - 1] == player && board[i + 2][j - 2] == player && board[i + 3][j - 3] == player) {
                return true;
            }
        }
    }
    return false;
}

// RESETS THE GAME BOARD FOR REPLAYABILITY
void resetBoard(char board[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            board[i][j] = '_';
        }
    }
}

int main() {
    // GAME BOARD
    char board[rows][columns] = {
        {'_', '_', '_', '_', '_', '_', '_', '_'},
        {'_', '_', '_', '_', '_', '_', '_', '_'},
        {'_', '_', '_', '_', '_', '_', '_', '_'},
        {'_', '_', '_', '_', '_', '_', '_', '_'},
        {'_', '_', '_', '_', '_', '_', '_', '_'},
        {'_', '_', '_', '_', '_', '_', '_', '_'}
    };

    // VARIABLES
    string player1, player2;
    char symbol1, symbol2;
    int language, answer;

    // LANGUAGE SELECTION LOOP
    do {
        cout << "Choose a language:" << endl;
        cout << "Portugues - 1)" << endl;
        cout << "English - 2)" << endl;
        cout << "\nAnswer: ";
        cin >> language;

        if (language != 1 && language != 2) {
            system ("cls");
            cout << "Invalid character!" << endl << endl;
        }
    } while (language != 1 && language != 2);

    system("cls"); // CLEAR SCREEN

    do {
        // PORTUGUESE GAME
        if (language == 1) {
            cout << "\nBEM VINDO AO 4 EM LINHA!" << endl;

            // CICLO DE DEFINIÇÃO DOS NOMES DO JOGADORES
            do {
                cout << "\nQual o nome do jogador 1? ";
                cin >> player1;

                cout << "Qual o nome do jogador 2? ";
                cin >> player2;

                if (player1 == player2) {
                    cout << "\nOs 2 jogadores nao podem ter o mesmo nome!\n";
                }
            } while (player1 == player2);

            system("cls"); // LIMPA TELA

            // CICLO DE DEFINIÇÃO DOS SIMBOLOS DO JOGADORES
            do {
                cout << "\n" << player1 << ", escolha X ou O: ";
                cin >> symbol1;

                if (symbol1 == 'X' || symbol1 == 'x') {
                    symbol1 = 'X';
                    symbol2 = 'O';
                } else if (symbol1 == 'O' || symbol1 == 'o') {
                    symbol1 = 'O';
                    symbol2 = 'X';
                } else {
                    cout << "\nCaracter invalido!\n";
                }
            } while (symbol1 != 'X' && symbol1 != 'x' && symbol1 != 'O' && symbol1 != 'o');

            system("cls"); // LIMPA TELA

            // LOOP DE JOGO PRINCIPAL
            bool gameOver = false;
            char currentPlayer = symbol1;

            while (!gameOver) {

                // IMPRIME O NOME E O SIMBOLO DE AMBOS OS JOGADORES
                cout << player1 << ": " << symbol1 << endl;
                cout << player2 << ": " << symbol2 << endl << endl;

                // IMPRIME O TABULEIRO ATUAL
                printBoard(board);

                // PEDE A JOGADA DO JOGADOR ATUAL
                int column;
                cout << "\n" << (currentPlayer == symbol1 ? player1 : player2) << ", escolha uma coluna (1-7): ";
                cin >> column;

                // VERIFICA SE A COLUNA É VALIDA
                if (column >= 1 && column <= 7) {
                    column--;
                    for (int i = rows - 1; i >= 0; i--) {
                        if (board[i][column] == '_') {
                            board[i][column] = currentPlayer;
                            system("cls"); // LIMPA TELA
                            break;
                        }
                    }
                } else {
                    system("cls"); // LIMPA TELA
                    cout << "Coluna invalida! Escolha uma coluna de 1 a 7." << endl << endl;
                    continue;
                }

                // VERIFICA SE O JOGADOR GANHOU APÓS CADA JOGADA
                if (checkWin(currentPlayer, board)) {

                    // IMPRIME O NOME E O SIMBOLO DE AMBOS OS JOGADORES
                    cout << player1 << ": " << symbol1 << endl;
                    cout << player2 << ": " << symbol2 << endl << endl;

                    printBoard(board);
                    cout << "\nParabens! " << (currentPlayer == symbol1 ? player1 : player2) << " venceu!\n" << endl;
                    gameOver = true;
                } else {
                    // SENÃO, MUDA PARA O PRÓXIMO JOGADOR
                    currentPlayer = (currentPlayer == symbol1) ? symbol2 : symbol1;
                }
            }
        }

        // ENGLISH GAME
        else {
            cout << "\nWELCOME TO CONNECT 4!" << endl;

            // PLAYERS' NAMES LOOP
            do {
                cout << "\nWhat's the name of player 1? ";
                cin >> player1;

                cout << "What's the name of player 2? ";
                cin >> player2;

                if (player1 == player2) {
                    cout << "\nBoth players can't have the same name!\n";
                }
            } while (player1 == player2);

            system("cls");

            // PLAYERS' SYMBOLS LOOP
            do {
                cout << "\n" << player1 << ", choose X or O: ";
                cin >> symbol1;

                if (symbol1 == 'X' || symbol1 == 'x') {
                    symbol1 = 'X';
                    symbol2 = 'O';
                } else if (symbol1 == 'O' || symbol1 == 'o') {
                    symbol1 = 'O';
                    symbol2 = 'X';
                } else {
                    cout << "\nInvalid character!\n";
                }
            } while (symbol1 != 'X' && symbol1 != 'x' && symbol1 != 'O' && symbol1 != 'o');

            system("cls");

            // MAIN GAME LOOP
            bool gameOver = false;
            char currentPlayer = symbol1;

            while (!gameOver) {
                // PRINTS THE NAME AND THE SYMBOL OF BOTH PLAYERS
                cout << player1 << ": " << symbol1 << endl;
                cout << player2 << ": " << symbol2 << endl << endl;

                // PRINTS THE CURRENT GAME BOARD
                printBoard(board);

                // ASKS THE USER INPUT
                int column;

                cout << "\n" << (currentPlayer == symbol1 ? player1 : player2) << ", choose a column (1-7): ";
                cin >> column;

                // CHECKS IF THE COLUMN IS VALID
                if (column >= 1 && column <= 7) {
                    column--;
                    for (int i = rows - 1; i >= 0; i--) {
                        if (board[i][column] == '_') {
                            board[i][column] = currentPlayer;
                            system("cls"); // LIMPA TELA
                            break;
                        }
                    }
                } else {
                    system("cls"); // LIMPA TELA
                    cout << "Invalid column! Choose one between 1 and 7." << endl << endl;
                    continue;
                }

                // CHECKS IF THE PLAYER WON AFTER EACH PLAY
                if (checkWin(currentPlayer, board)) {

                    // PRINTS THE NAME AND THE SYMBOL OF BOTH PLAYERS
                    cout << player1 << ": " << symbol1 << endl;
                    cout << player2 << ": " << symbol2 << endl << endl;

                    printBoard(board);
                    cout << "\nCongratulations! " << (currentPlayer == symbol1 ? player1 : player2) << " won!\n" << endl;
                    gameOver = true;
                } else {
                    // IF NOT, SWITCH TO THE NEXT PLAYER
                    currentPlayer = (currentPlayer == symbol1) ? symbol2 : symbol1;
                }
            }
        }

        if (language == 1) {
            cout << "Jogar de novo - 1)" << endl;
            cout << "Fechar programa - 2)" << endl;
            cout << "Resposta: ";
            cin >> answer;
        } else {
            cout << "Play again - 1)" << endl;
            cout << "Close app - 2)" << endl;
            cout << "Answer: ";
            cin >> answer;
        }


        resetBoard(board); // RESETS THE GAME BOARD

    } while (answer != 2);

    return 0;
}
