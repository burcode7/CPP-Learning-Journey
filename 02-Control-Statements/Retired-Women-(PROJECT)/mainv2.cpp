#include <iostream>
using namespace std;

int main()
{
    int age;
    char gender;

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Please enter your gender: ";
    cin >> gender;

    if(age >= 60 && (gender == 'f' || gender == 'F'))
    {
        cout << "You qualify for the discount!" << endl;
    }
    else 
    {
        cout << "You do not qualify for the discount." << endl;
    }
    return 0;
}