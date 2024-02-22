#include <iostream>

using namespace std;

/** função de inicialização do programa **/
int main() {

    string nome, sobrenome;
    string nomecompleto;

    nome = "Luis";
    sobrenome = "Santos";
    //nomecompleto = nome + " " + sobrenome;
    nomecompleto = nome;
    nomecompleto += " ";
    nomecompleto += sobrenome;
    //nomecompleto = nome.append(" ").append(sobrenome);

    cout << nomecompleto;
    cout << ", o teu nome tem " << (nomecompleto.length() - 1);
    //cout << ", o teu nome tem " << (nomecompleto.size() - 1);
    cout << " caracteres";

    cout << "\n\n A primeira letra do teu sobrenome e: ";
    cout << sobrenome[0] << " " << sobrenome[2];
    sobrenome[2] = '-';
    cout << "\n\n A primeira letra do teu sobrenome e: ";
    cout << sobrenome[0] << " " << sobrenome[2];

    string txt = "\nEu sou o maior \"da turma\"";
    cout << endl << txt;
}
