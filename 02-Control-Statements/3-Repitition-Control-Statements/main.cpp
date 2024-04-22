#include <iostream>
using namespace std;

int main()
{

    // While loop continues as long as the condition is true
    int count = 0;
    while (count < 10)
    {
        cout << count << endl;
        count++;
    }

    cout << endl << endl;

    // Do while loop runs always once and then checks if the condition is true to keep running
    // In this loop, the condition is false, so it will only run once.
    int count2 = 10;
    do
    {
        cout << count2 << endl;
        count2++;
    } while (count2 < 10);

    cout << endl << endl;

    // For loops can have declarations, condition tests, and counter variable changes all in the header
    // Perfect syntax when you need a counter
    for(int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    int input;
    cout << "Please enter a non-negative integer to continue, "
    "or negative if you want to quit: " << endl;

    cin >> input;

    while (input >= 0)
    {
        cout << input << endl;
        
        cout << "Please enter a non-negative integer to continue, "
        "or negative if you want to quit: " << endl;

        cin >> input;
    }
    return 0;
}