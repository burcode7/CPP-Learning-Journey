#include <iostream>
using namespace std;

/*
    >   greater than
    >=  greater than or equal to
    <   less than
    <=  less than or equal to
    ==  equal-to (equality)
    !=  not-equal-to (equality)
*/
int main()
{
    cout << boolalpha;

    int a = 15;
    int b = 20;
    // Gives the bool areEqual true or false based on whether or not a == b
    bool areEqual = a == b;
    int myCurrentAge = 17;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    // Prints out whether or not (a < b) is true or false
    cout << "Is A greater than B? " << (a < b) << endl;

    cout << "Are A and B equal? " << areEqual << endl;
    

    cout << "Am I older than 21? " << (myCurrentAge >= 21) << endl;

    return 0;
}