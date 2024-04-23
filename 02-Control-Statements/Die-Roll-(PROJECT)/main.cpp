#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(nullptr));
    int dieCount = 0;
    int dieNum;
    
    // while (dieCount < 10)
    // {
    //     dieNum = rand() % 10 + 1;
    //     cout << dieNum << endl;
    //     dieCount++;
    // }

    for (int i = 0; i < 10; i++)
    {
        dieNum = rand() % 10 + 1;
        cout << dieNum << endl;
    }

    return 0;
}