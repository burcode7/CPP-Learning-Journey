#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3;
    int totalNum = 3;
    double average;

    cout << endl << "Please enter three numbers" << endl;

    cout << endl << "Number one: ";
    cin >> num1;

    cout << endl << "Number two: ";
    cin >> num2;

    cout << endl << "Number three: ";
    cin >> num3;

    average = (num1 + num2 + num3) / (totalNum);
    
    cout << endl << "The average is: " << average << endl;
    
    return 0;
}