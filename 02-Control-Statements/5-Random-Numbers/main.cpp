#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{   
    // Seeds the random number generator
    srand(time(nullptr));

    int val1 = rand() % 10; // val1 will be >= 0 and < 10

    // Shifts it
    int val2 = rand() % 10 + 1; // val 2 is > = 1 and <= 10

    cout << val1 << endl;
    cout << val2 << endl; 
    
    return 0;
}