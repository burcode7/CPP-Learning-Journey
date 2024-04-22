#include <iostream>
using namespace std;

int main()
{
    char grade;

    cout << "Please enter a letter grade: ";
    cin >> grade;

    /*
        A switch statement takes in the variable and goes through every single case until it reaches the 
        case that matches. Break statements stop fallthrough, which causes every single case to run until 
        it reaches the end. The default runs if none of the cases were matched. An example where this can
        be useful is if you want to run one command with multiple cases, as shown in the code below.

    */
    switch (grade)
    {
        case 'A':
        case 'a':
            cout << "Great job!" << endl;
            break;
        case 'B':
        case 'b':
            cout << "Good job!" << endl;
            break;
        case 'C':
        case 'c':
            cout << "You can do better!" << endl;
            break;
        case 'D':
        case 'd':
            cout << "You are getting close to failing!" << endl;
            break;
        case 'F':
        case 'f':
            cout << "You are failing the course!" << endl;
        default:
            cout << "You have entered an invalid grade. Try again" << endl;
    }

    return 0;
}