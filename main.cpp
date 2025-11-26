#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess;

    cout << "Welcome to Guess the Number!" << endl;
    cout << "I have picked a number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < secret) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secret) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Correct! You guessed it!" << endl;
        }

    } while (guess != secret);

    return 0;
}
