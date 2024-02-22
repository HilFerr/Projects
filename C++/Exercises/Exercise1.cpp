#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int i;
    int aux;

    do {
        cout << "What number do you want to add to " << i << "? ";
        cin >> aux;

        i += aux;
    } while (typeid(aux)!= typeid(int));

    return 0;
}
