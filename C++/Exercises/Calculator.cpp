#include <iostream>

using namespace std;

// VARIABLES
int symbol;
double num1, num2;
int postGameAnswer;

// DICTATES THE RESULT OF THE CALCULATIONS
if (symbol == 1) {
    result = num1 + num2;

} else if (symbol == 2) {
    result = num1 - num2;

} else if(symbol == 3) {
    result = num1 * num2;

} else if (symbol == 4) {
    result = num1 / num2;

}

// CALCULATION FUNCTIONS
void addition () {
    
    // ASKS THE USER FOR NUM2
    cout << "\nYou want to add " << num1 << " to what number?" << endl << endl;
    cin >> num2;

    system("cls"); // CLEAR SCREEN
    cout << num1 << " + " << num2 << " = " << result << endl;
}

void subtraction() {
    
    // ASKS THE USER FOR NUM2
    cout << "\nYou want to subtract " << num1 << " from what number?" << endl << endl;
    cin >> num2;

    system("cls"); // CLEAR SCREEN
    cout << num1 << " - " << num2 << " = " << result << endl;
}

void multiplication() {
    
    // ASKS THE USER FOR NUM2
    cout << "\nYou want to multiply " << num1 << " by what number?" << endl << endl;
    cin >> num2;

    system("cls"); // CLEAR SCREEN
    cout << num1 << " x " << num2 << " = " << result << endl;
}

void division() {

    // ASKS THE USER FOR NUM2
    cout << "\nYou want to divide " << num1 << " by what number?" << endl << endl;
    cin >> num2;

    system("cls"); // CLEAR SCREEN
    cout << num1 << " / " << num2 << " = " << result << endl;
}

void exponentiation(int i, int answer,) {

    // ASKS THE USER FOR NUM2
    cout << "\nYou want to exponentiate " << num1 << " by what number?" << endl << endl;
    cin >> num1;

    if (num2 > 0) {
        for (i = 1; i <= num2; i++) {
            answer = answer * num1;

        }
        cout << num1 << " ^ " << num2 << " = " << answer;

    } else if (num2 == 0) {
        cout << num1 << " ^ " << num2 << " = " << "1";

    } else {
        for (i = 1; i <= (num2 * -1); i++) {
            answer = answer * base;
            cout << answer << endl;

        }
        x = 1 / answer;
        cout << x << endl;
        cout << num1 << " ^ " << num2 << " = " << (1 / answer);

    }
}

void postGameOptions() {
    // POST GAME OPTIONS
    cout << "1 - Restart game;" << endl;
    cout << "2 - Close app;" << endl << endl;
    cin >> postGameAnswer;

    if (symbol != 1 && symbol != 2) {
        system("cls");
        cout << "Invalid character!";
    }
}

int main() {

    cout << "\nWelcome to my calculator!" << endl;

    // MAIN GAME LOOP
    do {
        do {
            cout << "What calculation would you like to perform?? + | -| x | / | ^" << endl << endl;

            cout << "Subtitles:" << endl;
            cout << "'1' = Addition \n";
            cout << "'2' = Subtraction \n";
            cout << "'3' = Multiplication \n";
            cout << "'4' = Division \n";
            cout << "'5' = Exponentiation \n" << endl;
            cin >> symbol;

            // IF THE SIMBOLO ISN'T 1, 2, 3, 4 OR 5 PRINTS THIS
            if (symbol != 1 && symbol != 2 && symbol != 3 && symbol != 4 && symbol != 5) {
                system("cls");
                cout << "Invalid character!";
            }
        } while (symbol != 1 && symbol != 2 && symbol != 3 && symbol != 4 && symbol != 5);

        system("cls");

        // ASKS THE USER FOR NUM1
        cout << "\nWhat number do you want to use? " << endl << endl;
        cin >> num1;

        // ADDITION
        if (symbol = 1) {
            addition();

        // SUBTRACTION
        } else if (symbol = 2) {
            subtraction();

        // MULTIPLICATION
        } else if (symbol = 3) {
            subtraction();

        // DIVISION
        } else if (symbol = 4) {
            division();

        // EXPONENTIATION
        } else {
            exponentiation();

        }
        
        postGameOptions();

    } while (postGameAnswer != 2);
    
    return 0;
}
