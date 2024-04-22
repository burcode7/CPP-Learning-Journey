#include <iostream>
using namespace std;

int main()
{
    int age;
    string fullName;

    cout << "Please enter your name" << endl;
    /*
        Getline is used to take in string input that is more than one word.
        It does this because regular cin stops after seeing a space,
        and getline stops after seeing a new line.
        The parameters are the source of the data and where it is going:
        getline(source, destination);
    */
    getline(cin, fullName);

    cout << "Please enter your age" << endl;
    // Receive user input
    cin >> age;

    cout << fullName << endl;
    cout << age << endl;
    return 0;
}