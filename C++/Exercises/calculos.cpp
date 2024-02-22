#include <iostream>

using namespace std;

// IN�CIO DO C�DIGO
int main() {

    // VARI�VEIS
    string symbol;
    double num1, num2;

    cout << "\nBem-vindo a calculadora. \n";
    cout << "Que acao gostaria de realizar? + | -| x | /\n";
    cout << "\nLegenda: '1' = Adicao \n";
    cout << "\t '2' = Subtracao \n";
    cout << "\t '3' = Multiplicacao \n";
    cout << "\t '4' = Divisao \n";
    cin >> symbol; // SALVA A FUN��O DITA PELO UTILIZADOR

    system("cls"); // LIMPA TELA

    // SE O S�MBOLO N�O FOR 1, 2, 3, 4 ENT�O D� ERRO
    if (symbol != "1" && symbol != "2" && symbol != "3" && symbol != "4") {
        cout << "Erro";

    }

    cout << "\n";
    cout << "Qual e o numero que quer usar? \n";
    cin >> num1; // SALVA O N�MERO DITO PELO UTILIZADOR

    // FUN��O - ADI��O
    if (symbol == "1") {
        cout << "\n";
        cout << "Quer adicionar " << num1 << " a que numero? \n";
        cin >> num2; // SALVA O N�MERO DITO PELO UTILIZADOR

        // IMPRIME A RESPOSTA
        cout << "\n";
        cout << num1 << " + " << num2 << " = " << num1 + num2;

    // FUN��O - SUBTRA��O
    } else if (symbol == "2") {
        cout << "\n";
        cout << "Quer subtrair " << num1 << " de que numero? \n";
        cin >> num2; // SALVA O N�MERO DITO PELO UTILIZADOR

        // IMPRIME A RESPOSTA
        cout << "\n";
        cout << num1 << " - " << num2 << " = " << num1 - num2;

    //FUN��O - MULTIPLICA��O
    } else if (symbol == "3") {
        cout << "\n";
        cout << "Que multiplicar " << num1 << " com que numero? \n";
        cin >> num2; // SALVA O N�MERO DITO PELO UTILIZADOR

        // IMPRIME A RESPOSTA
        cout << "\n";
        cout << num1 << " x " << num2 << " = " << num1 * num2;

    // FUN��O -DIVIS�O
    } else if (symbol == "4") {
        cout << "\n";
        cout << "Quer dividir " << num1 << " de que numero? \n";
        cin >> num2; // SALVA O N�MERO DITO PELO UTILIZADOR

        // IMPRIME A RESPOSTA
        cout << "\n";
        cout << num1 << " / " << num2 << " = " << num1 / num2;

    }

    return 0;
}
