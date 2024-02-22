#include <iostream>
#include <string>

using namespace std;

string converterarrayemstring(string palavra, int i = 0) {
    if (i == palavra.length()) {
        return "";
    } else {
        return palavra.substr(0, i + 1) + "\n" + converterarrayemstring(palavra, i + 1);
    }
}

int main() {
    string palavra;
    cout << "Ola,";
    cout << "\nIntroduza uma palavra: ";
    cin >> palavra;

    cout << converterarrayemstring(palavra);

    return 0;
}
