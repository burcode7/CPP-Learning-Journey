#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Initialize all variables to reduce repetition
    char package;
    int monthlyJam;
    int totalCost;
    int jamCost;
    int monthlyCost;
    int monthlyJamCost;
    int freeJam;

    // All packages
    cout << "Welcome to the Jam of the Month!" << endl << endl;
    cout << "Here are the package options:" << endl << endl;

    cout << "Package A:" << endl <<
    "- $8/month" << endl <<
    "- Includes 2 jams per month" << endl <<
    "- Each additional jam on top of the 2 is $5 each" << endl << endl;

    cout << "Package B:" << endl <<
    "- $12/month" << endl <<
    "- Includes 4 jams per month" << endl <<
    "- Each additional jam on top of the 4 is $4 each" << endl << endl; 

    cout << "Package C:" << endl <<
    "- $15/month" << endl <<
    "- Includes 6 jams per month" << endl <<
    "- Each additional jam on top of the 6 is $3 each" << endl << endl;

    // Find users package
    cout << "Please select your package in letter format: ";
    cin >> package;
    cout << endl;

    // Checks which package, gives values to the intialized variables, and finds the total
    switch(package)
    {
        case 'A':
        case 'a':

            monthlyCost = 8;

            monthlyJamCost = 5;

            freeJam = 2;

            cout << "Thank you for selecting Package A!" << endl << endl;

            cout << "Please enter how many jams you purchased this month: ";

            cin >> monthlyJam;

            if (monthlyJam <= freeJam)
            {
                cout << endl << "Since you have only purchased " << monthlyJam <<
                " jams this month, which is covered in the package," << endl <<
                "your cost sums up to only your monthly fee! That would be $" << monthlyCost << " please." << endl << endl;
            }

            else
            {
                jamCost = (monthlyJam * monthlyJamCost) - (monthlyJamCost * freeJam);
                totalCost = jamCost + monthlyCost;
                cout << endl << "Your total cost with an added monthly fee is $" << totalCost << "." << endl << endl;
            }

            break;
        case 'B':
        case 'b':

            monthlyCost = 12;

            monthlyJamCost = 4;

            freeJam = 4;

            cout << "Thank you for selecting Package B!" << endl << endl;

            cout << "Please enter how many jams you purchased this month: ";

            cin >> monthlyJam;

            if (monthlyJam <= freeJam)
            {
                cout << endl << "Since you have only purchased " << monthlyJam <<
                " jams this month, which is covered in the package," << endl <<
                "your cost sums up to only your monthly fee! That would be $" << monthlyCost << " please." << endl << endl;
            }

            else
            {
                jamCost = (monthlyJam * monthlyJamCost) - (monthlyJamCost * freeJam);
                totalCost = jamCost + monthlyCost;
                cout << endl << "Your total cost with an added monthly fee is $" << totalCost << "." << endl << endl;
            }

            break;
        case 'C':
        case 'c':

            monthlyCost = 15;

            monthlyJamCost = 3;

            freeJam = 6;

            cout << "Thank you for selecting Package A!" << endl << endl;

            cout << "Please enter how many jams you purchased this month: ";

            cin >> monthlyJam;

            if (monthlyJam <= freeJam)
            {
                cout << endl << "Since you have only purchased " << monthlyJam <<
                " jams this month, which is covered in the package," << endl <<
                "your cost sums up to only your monthly fee! That would be $" << monthlyCost << " please." << endl << endl;
            }

            else
            {
                jamCost = (monthlyJam * monthlyJamCost) - (monthlyJamCost * freeJam);
                totalCost = jamCost + monthlyCost;
                cout << endl << "Your total cost with an added monthly fee is $" << totalCost << "." << endl << endl;
            }

            break;

        default:
            cout << "Invalid package" << endl;
    }
    return 0;
}

/*
    REMEMBER!

    This could also be done with if statements!
*/