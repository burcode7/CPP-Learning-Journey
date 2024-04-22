#include <iostream>
#include <iomanip>
using namespace std;

/*
    &&  Logical AND
    ||  Logical OR
    !   Logical NOT
*/

int main()
{   
    bool isRaining = true;
    bool isWarm = true;

    cout << boolalpha;
    
    cout << "And: " << (isRaining && isWarm) << endl;
    cout << "Or: " << (isRaining || isWarm) << endl;
    cout << "Not : " << (!isRaining) << endl;

    return 0;
}