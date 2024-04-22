#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    

    // Only runs if the condition is true
    if(age >= 16)
    {
        cout << endl << "You can drive" << endl;
    }
    // Runs if the "if" statement does not
    else
    {
        cout << endl << "You cannot drive yet!" << endl;
    }

    // for loop
    for (int i = 1; i <= age; i++)
    {
        cout << "Happy Birthday " << i << endl;
    }

    return 0;
}