#include <iostream>

using namespace std;

// ADDS A NUMBER TO THE PREVIOUSLY WRITTEN NUMBER, INFINITLY
int main() {
    int i = 0;
    int aux;

    do {
        cout << "What number do you want to add to " << i << "? ";
        cin >> aux;

        if (cin.fail()) {
            // IF THE INPUT IS NOT AN INTEGER BREAKS THE LOOP
            cout << "Invalid input. Exiting the loop." << endl;
            break;
        }

        i += aux;

    } while (true); // THE LOOP CONTINUES UNTIL THE USER INPUTS AN NON-INTEGER CHARACTER

    cout << "Final sum: " << i << endl;

    return 0;
}
