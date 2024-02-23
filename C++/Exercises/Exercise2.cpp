#include <iostream>

using namespace std;

// SIMPLE CODE THAT WILL SHOW THE USER THE LETTERS IN THE NAME & SIRNAME
int main() {

    // VARIABLES
    string name, sirname, username;

    cout << "What's your name? ";
    cin >> name;

    cout << "What's your sirname? ";
    cin >> sirname;

    // SHOWS THE USER THEIR NAME
    cout << "\nHello dear " << name[0] << ". " << sirname << "." << endl;
    cout << "With your sirname, " << sirname << ", we have " << sirname[0] << " as the first letter." << endl;
    cout << "With your name, " << name << ", we have " << name[0] << " as the first letter." << endl;
    cout << "So, you'll be called " << name[0] << sirname[0] << "." << endl;

    username = name[0] + sirname[0];

    cout << "Welcome back, " << username << "!";

    return 0;
}
