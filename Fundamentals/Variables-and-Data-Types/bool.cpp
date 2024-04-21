#include <iostream>

using namespace std;

int main()
{
    // True or false variable
    bool isRaining = true;

    /* 
    Prints out 0, since 0 means false and 1 means true. 
    Bool alpha makes it so that "true" or "false" prints out instead.
    It only needs to be once, and it is always true.
    */
   
    cout << boolalpha;
    cout << isRaining << endl;

    return 0;
}