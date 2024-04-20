#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullName;
    string location;
    int initialScore;

    cout << "Please enter an integer from 0 to 100: ";
    cin >> initialScore;

    // Gets a single character from the input and returns the data
    cin.get();

    cout << endl << "Please enter your full name: ";
    getline(cin, fullName);

    cout << endl << "Please enter your city, state/province, and country: ";
    getline(cin, location);

    

    cout << "Hello, " << fullName << "." << endl;
    cout << "We heard you are from " << location << "." << endl;
    cout << "Your original score is " << initialScore << ", but with five points added, your score is now " << (initialScore + 5) << endl;

    return 0;
}