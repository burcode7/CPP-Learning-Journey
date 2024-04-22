#include <iostream>
#include <string>
using namespace std;

int main()
{
    string adjective1, girlsName, adjective2, occupation1, placeName;
    string clothing, hobby, adjective3, occupation2, boysName, mansName;

    system("cls");
    cout << "Please enter an adjective: ";
    getline(cin, adjective1);
    system("cls");

    cout << "Please enter a girls name: ";
    getline(cin, girlsName);
    system("cls");

    cout << "Please enter an adjective: ";
    getline(cin, adjective2);
    system("cls");

    cout << "Please enter an occupation: ";
    getline(cin, occupation1);
    system("cls");

    cout << "Please enter the name of a location: ";
    getline(cin, placeName);
    system("cls");

    cout << "Please enter a type of clothing (plural): ";
    getline(cin, clothing);
    system("cls");

    cout << "Please enter a hobby: ";
    getline(cin, hobby);
    system("cls");

    cout << "Please enter an adjective: ";
    getline(cin, adjective3);
    system("cls");

    cout << "Please enter an occupation: ";
    getline(cin, occupation2);
    system("cls");

    cout << "Please enter a boys name: ";
    getline(cin, boysName);
    system("cls");

    cout << "Please enter a mans name: ";
    getline(cin, mansName);
    system("cls");

    cout << "There once was a " << adjective1 << " girl named " << girlsName << endl;
    cout << "who was a " << adjective2 << " " << occupation1 << " in the Kingdom of " << placeName << ".";
    cout << endl << "She loved to wear " << clothing << " and " << hobby << "." << " She wanted to marry" << endl;
    cout << "the " << adjective3 << " " << occupation2 << " named " << boysName << " but her father," << endl;
    cout << "King " << mansName << " forbid her from seeing him." << endl;

    return 0;
}