// Guess My Number Reversed
// The classic number guessing game, but with the computer doing the guessing

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "Enter a number, between 1 and 100, for the computer to guess: ";
    int inputNumber;
    cin >> inputNumber;
    int tries = 0;
    bool guessed = false;
    srand(static_cast<unsigned int>(time(0)));  // seed random number generator

    do 
    {
        
        int guessedNumber = rand() % 100 + 1;

        if (guessedNumber > inputNumber)
        {
            cout << "Too high." << endl;
        }
        else if (guessedNumber < inputNumber)
        {
            cout << "Too low." << endl;
        }
        else
        {
            guessed = true;
        }
        ++tries;
    } while (!guessed);

    cout << "The computer guessed your number in " << tries << " guesses." << endl;

    return 0;

}
