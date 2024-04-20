#include <iostream>
using namespace std;

int main()
{
    /* 

    Cannot start identifiers with a number
    Cannot have any spaces
    Semicolon is used to end a statement (any line of code)
    int - A whole number variable, cannot be anything except a whole number
    etc: -1, -5, 10, 0, 32
    double - Any real number. Can hold any real number value
    etc: 3.14159, -5, 0, 13

    */

    // Declare the variable
    int myInt;

    // Give the variable a name
    myInt = 15;

    // Both declares and initializes the double variable
    double myDouble = 3.14159;
    double stateTaxRate = 0.06;

    // Prints the integer and doubles we just initialized and gave a value to
    cout << myInt << endl;
    cout << myDouble << endl;
    cout << stateTaxRate << endl;

    system("pause");
    
    return 0;
}