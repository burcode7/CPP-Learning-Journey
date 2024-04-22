#include <iostream>
using namespace std;

int main()
{

    int age;

    cout << "Welcome to the Pub and Grille!" << endl;
    cout << "Please enter your age: ";
    cin >> age;

    // Only runs if age is greater than or equal to 21
    if(age >= 21)
    {
        cout << "Here, have a beer." << endl;
    }

    // Runs if the if statement above does not, and the condition is met
    else if (age >= 16)
    {
        cout << "Here, have a coke." << endl;
        cout << "And, at least you can drive!" << endl;
    }

    // Runs if the if statement above it does not
    else
    {
        cout << "Here, have a coke." << endl;
    }

    cout << "Thanks for coming to the Pub and Grille!" << endl;

    return 0;
}