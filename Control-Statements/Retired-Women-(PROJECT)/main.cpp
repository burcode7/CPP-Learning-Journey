#include <iostream>
using namespace std;


int main()
{
    int age;
    char gender;
    bool qualify;

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Please enter your gender in letter form: ";
    cin >> gender;

    switch(gender)
    {
        case 'f':
        case 'F':
            if (age >= 60)
            {
                cout << "You qualify for the discount!" << endl;
            }
            else
            {
                cout << "You do not qualify for the discount." << endl;
            }
            break;
        default:
            cout << "You do not qualify for the discount." << endl;

    }
    return 0;
}