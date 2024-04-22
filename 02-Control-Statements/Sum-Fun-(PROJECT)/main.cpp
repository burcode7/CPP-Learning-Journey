#include <iostream>
using namespace std;

int main()
{

    int userNum, sum = 0;

    cout << "Please enter a positive integer: ";
    cin >> userNum;

    while (userNum >= 0)
    {
        sum += userNum;

        cout << "Please enter another positive integer, or a negative one to quit: ";
        
        cin >> userNum;
    }
    cout << endl;

    cout << "Your score is: " << sum << endl;

    return 0;
}