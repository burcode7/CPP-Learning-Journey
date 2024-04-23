#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(nullptr));

    int randomNum = rand () % 100 + 1;
    int userNum;
    int guesses;
    bool guessedNumber = false;

    cout << "Guess a number between 1 and 100: ";
    
    while (!guessedNumber)
    {
        
        cin >> userNum;

        if (userNum < 2 || userNum > 100)
        {
            cout << "You wasted a guess! Enter a number between 1 and 100: ";
        }
        else if (userNum > randomNum)
        {
            cout << "Lower... ";
        }
        else if (userNum < randomNum)
        {
            cout << "Higher... ";
        }
        else if (userNum == randomNum)
        {
            cout << "Congragulations! You guessed the number " << randomNum << " in " << guesses << " guesses!" << endl;
            cout << "Thanks for playing!" << endl;
            guessedNumber = true;
        }
        guesses++;
    }
    return 0;
}