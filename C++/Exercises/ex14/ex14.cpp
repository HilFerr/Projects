#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

int main() {

    string varx = "Luis";
    string* vary = &varx;

    cout << "Varx = " << varx << endl;
    cout << "Varx na posicao de memoria: " << varx << endl;

    cout << "Vary (referencia memoria?): " << vary << endl;
    cout << "Vary (esta a apontar para Varx) = " << *vary << endl;

    *vary = "Santos";

    cout << "Varx = " << *vary << endl;
    cout << "Varx na posicao de memoria: " << varx << endl;

    cout << "Vary (referencia memoria?): " << vary << endl;
    cout << "Vary (esta a apontar para Varx) = " << *vary << endl;

    return 0;
}
