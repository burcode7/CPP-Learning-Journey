/*
    Arithmetic operators (known as operands)
    +   addition operator
    -   subtraction operator
    *   multiplication operator
    /   divison operator
    %   modulus operator
*/
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 3;

    // Examples of what the operands do
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;
    int result = 10;
    int myInt = 5;

    /*
        += is a compound operator, meaning it takes the original value and uses the operator for a new value.
        eg: int result = 5;
            result += 15;
            Result now = 20
        You can turn any operator into a compound operator.
    */

    result += 15;

    cout << "Sum = " << sum << endl;
    cout << "Difference = " << difference << endl;
    cout << "Product = " << product << endl;
    // Since these variables are integers, it ignores the decimal
    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder << endl;
    cout << "Result = " << result << endl;

    cout << myInt << endl;
    // Adds one to the variable "myInt". Same as myInt += 1; or myInt = myInt + 1;
    myInt++;

    cout << myInt << endl;

    // Now subtracts one with the same concept as before
    myInt--;

    cout << myInt << endl;
    
    return 0;
}