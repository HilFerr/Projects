a#include <iostream>asd

using namespace std;

// INÍCIA O PROGRAMA
int main() {

    // GUARDA AS VARIÁVEIS DOS NOMES DO UTILIZADOR
    string nome;
    string sobrenome;
d
    cout << "Qual e o seu primeiro nome? ";
    cin >> nome;

    cout << "Qual e o seu apelido? ";

    cin >> sobrenome;

    cout << "\nBom dia caro " << nome[0] << ". " << sobrenome << "." << endl;
    cout << "Com o teu sobrenome " << sobrenome << ", temos o " << sobrenome[0] << "." << endl;
    cout << "Com o teu nome " << nome << ", temos o " << nome[0] << "." << endl;
    cout << "Assim sera chamado de " << nome[0] << sobrenome[0] << "." << endl;

    return 0;
}
