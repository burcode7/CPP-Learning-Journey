/* 
Compiler converts source code to machine code that the machine can understand. 
The machine doesn't actually understand C++, it is converted to machine code which it can understand.
*/

/*
Input output stream- allows us to interact with the user,
putting information into the console and taking it from the user/
*/
#include <iostream>

// Makes it so that you do not have to use standart namespace (optional)
using namespace std;

int main()
{

    /*
     std: Standard Namspace 
     cout: Character | Console output
     endl: Ends the line
    */
    std::cout << "Hello, World!" << std::endl;

    // Pauses the console so that the terminal does not close
    system("pause");

    // Signals to the program that nothing went wrong
    return 0;
}