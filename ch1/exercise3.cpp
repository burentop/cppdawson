// Ch1 Exercise 3
// Get 3 game scores from the user, and display the average

#include <iostream>
using namespace std;

int main()
{
    double score1, score2, score3, average;
    
    cout << "Please enter 3 scores, and I will return the average." << endl;
    cout << "Score 1: ";
    cin >> score1;

    cout << "Score 2: ";
    cin >> score2;

    cout << "Score 3: ";
    cin >> score3;

    average = (score1 + score2 + score3) / 3.0;

    cout << "The average is: " << average << endl;

    return 0;
}